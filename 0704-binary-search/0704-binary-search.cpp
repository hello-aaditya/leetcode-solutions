class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();

        if(size == 1 && nums[0]==target) return 0;
        else if(size == 1 && nums[0]!=target) return -1;

        int leftPtr = 0;
        int rightPtr = size-1;

        while(leftPtr<=rightPtr)
        {
            int mid = leftPtr+(rightPtr-leftPtr)/2;
            if(nums[mid] == target)
            {
                return mid;
            }

            else if(nums[mid] < target)
            {
                leftPtr = mid+1;
            }

            else if(nums[mid] > target)
            {
                rightPtr = mid-1;
            }
        }
        return -1;
        
    }
};