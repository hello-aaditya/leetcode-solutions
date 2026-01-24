class Solution {
    public int findDuplicate(int[] nums) {
        int size = nums.length;
        int start = 0;

        while (start < size) {
            int correctIndex = nums[start] - 1;
            if (nums[start] != nums[correctIndex]) {
                int temp = nums[correctIndex];
                nums[correctIndex] = nums[start];
                nums[start] = temp;
            }
            else {
                start++;
            }
        }

        for (int i=0; i<size; i++) {
            if (i + 1 != nums[i]) {
                return nums[i];
            }
        }
        return -1;
    }
}