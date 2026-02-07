class Solution {
    public void moveZeroes(int[] nums) {
        int size = nums.length;
        int start = 0;
        int end = 0;

        while (end < size) {
            if (nums[end] != 0) {
                int temp = nums[end];
                nums[end] = nums[start];
                nums[start] = temp;
                start++;
            }
            end++;
        }

        for (int i=start; i<size; i++) {
            nums[start] = 0;
        }
    }
}