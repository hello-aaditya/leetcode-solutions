class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //edge case
        if(nums.size() == 1) return -1;

        //sort the array
        sort(nums.begin(), nums.end());

        //check for duplicacy
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1] == nums[i])
            {
                return nums[i];
            }
        }
        return -1;
    }
};