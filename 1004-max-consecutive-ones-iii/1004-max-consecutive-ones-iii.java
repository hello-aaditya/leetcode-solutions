class Solution {
    public int longestOnes(int[] nums, int k) {
        int size = nums.length;
        int start = 0;
        int maxOnes = 0;
        int countZero = 0;

        for (int end=0; end<size; end++) {
            if (nums[end] == 0) {
                countZero++;
            }

            if (countZero <= k) {
                int windowSize = end - start + 1;
                maxOnes = Math.max(maxOnes, windowSize);
            }

            while (countZero > k) {
                if (nums[start] == 0) {
                    countZero--;
                }
                start++;
            }
        }
        return maxOnes;
    }
}