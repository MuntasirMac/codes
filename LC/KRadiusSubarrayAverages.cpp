class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k == 0)
            return nums;
        int n = nums.size();
        vector<int> averages(n, -1);
        vector<long long> prefix(n+1);
        if(2*k+1 > nums.size())
            return averages;
        prefix[0] = nums[0];
        for(int i=1; i<n; i++) {
            prefix[i] = prefix[i-1]+nums[i];

        }
        int circle = (2*k) + 1;
        averages[k] = prefix[circle-1]/circle;

        for(int i=k+1, j=1; i<n-k; i++, j++) {

            averages[i] = (prefix[circle-1+j] - prefix[j-1])/circle;
            cout << circle+j-1 << " " << j << "\n";

        }
        return averages;
    }
};
