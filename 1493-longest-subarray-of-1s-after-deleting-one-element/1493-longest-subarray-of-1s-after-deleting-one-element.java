class Solution {
    public int longestSubarray(int[] nums) {
        int size = nums.length;
        int start = 0;
        int longestSubarray = 0;
        int notOne = 0;

        for (int end = 0; end<size; end++) {
            if (nums[end] == 0) {
                notOne++;
            }
            while (notOne > 1) {
                if (nums[start] == 0) {
                    notOne--;
                }
                start++;
            }
            int windowSize = end - start;
            longestSubarray = Math.max(longestSubarray, windowSize);
        }
        return longestSubarray;
    }
}