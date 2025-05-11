class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();

        // edge-case-1: where size = 1
        if(size == 1)   return 0;

        // Edge Case 2: Check if peak exists at the boundaries (0 or n-1)
        // Because nums[-1] and nums[n] are considered -∞

        if(nums[0] > nums[1])   return 0;
        if(nums[size-1] > nums[size-2]) return size-1;

        // Main Logic: Binary Search in O(log n) time
        int start = 0, end = size-1;
        while(start<=end)
        {
            // Bitwise trick to compute mid safely without overflow or division
            int mid = (start & end) + ((start ^ end) >> 1);
            if(nums[mid]>nums[mid+1] && nums[mid] > nums[mid-1])
            {
                return mid;
            }
            else if(nums[mid] < nums[mid+1])
            {
                start = mid+1;
            }
            else if(nums[mid] < nums[mid-1])
            {
                end = mid-1;
            }
        }
        return -1;
    }
};