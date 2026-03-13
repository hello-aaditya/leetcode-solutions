class Solution {
    public int removeDuplicates(int[] nums) {
        int size = nums.length;

        // EDGECASE: IF THE SIZE THE ARRAY IS 1
        if (size == 1) {
            return 1;
        }

        // NON-EDGECASE
        int start = 0;
        int end = start+1;

        while (end < size) {
            if (nums[start] == nums[end]) {
                end++;
            } else {
                nums[start+1] = nums[end];
                start++;
                end++;
            }
        }

        return start+1;
    }
}