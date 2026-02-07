class Solution {
    public int missingNumber(int[] nums) {
        int size = nums.length;
        int start = 0;
        while (start < size) {
            int correctIndex = nums[start];
            if ((correctIndex < size) && (nums[correctIndex] != nums[start])) {
                int temp = nums[correctIndex];
                nums[correctIndex] = nums[start];
                nums[start] = temp;
            } else {
                start++;
            }
        }

        for (int i=0; i<size; i++) {
            if (i != nums[i]) {
                return i;
            }
        }
        return size;
    }
}