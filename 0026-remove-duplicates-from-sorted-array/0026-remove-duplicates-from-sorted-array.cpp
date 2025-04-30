class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int count = 1;

        int left = 0, right = 0;
        for(int i=0; i<size-1; i++)
        {
            if(nums[i] != nums[i+1])
            {
                nums[left+1] = nums[i+1];
                right = i+1;
                left = left+1;
                count++;
            }
            else if(nums[i] == nums[+1])
            {
                right = i+1;
            }
        }
        return count;
    }
};