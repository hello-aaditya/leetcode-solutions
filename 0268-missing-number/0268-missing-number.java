class Solution {
    public int missingNumber(int[] nums) {
        int size = nums.length;

        // SUM OF n NATURAL NUMBER = n * (n+1) / 2

        int sum = size * (size + 1) / 2;

        for (int i=0; i<size; i++) {
            sum -= nums[i];
        }
        return sum;
    }
}