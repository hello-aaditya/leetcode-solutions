class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size();

        // initialize two variable: 1. left pointer 2. right pointer
        int leftPtr = 0, rightPtr = size-1;

        // ensure to check in valid range
        while(leftPtr<=rightPtr)
        {
            int mid = leftPtr+(rightPtr-leftPtr)/2;

            // if target is found in the mid index then return the mid index
            if(nums[mid] == target)
            {
                return mid;
            }
            // if the element in mid index > target then update rightPtr
            else if(nums[mid] > target)
            {
                rightPtr = mid-1;
            }
            // if the element in mid index < target then update leftPtr
            else
            {
                leftPtr = mid+1;
            }
        }
        return -1;
    }
};