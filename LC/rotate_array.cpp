class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i, n = nums.size();
        if(k > n)
            k %= n;
        if(k==n) return;
        for(i=0; i<n/2; i++) {
            swap(nums[i], nums[n-1-i]);
        }

        for(i=0; i<k/2; i++) {
            swap(nums[i], nums[k-1-i]);
        }
        cout << nums[k];
        for(i=0; i<(n-k)/2; i++)
            swap(nums[i+k], nums[n-1-i]);

    }
};
