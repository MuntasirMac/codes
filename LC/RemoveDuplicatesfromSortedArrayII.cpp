class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1, elemCount=1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]==nums[i-1]) {
                elemCount++;
                if(elemCount > 2) {
                    continue;
                }
            }
            else
                elemCount = 1;
            cnt++;
            cout << cnt << " " << elemCount << endl;
            nums[cnt-1] = nums[i];
        }

        return cnt;
    }
};
