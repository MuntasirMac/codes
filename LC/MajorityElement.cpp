class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winner=nums[0], counter=1;

        for(int i=1; i<nums.size(); i++) {
            if(nums[i] ==  winner)
                counter++;
            else
                counter--;
            if(counter < 0) {
                counter = 1;
                winner = nums[i];
            }
        }
        return winner;
    }
};
