class Solution {
    public int missingNumber(int[] nums) {
        int size = nums.length;
        int i=0;

        while (i < size) {
            int correctIndex = nums[i];
            if ((correctIndex != size) && (nums[i] != nums[correctIndex])) {
                int temp = nums[correctIndex];
                nums[correctIndex] = nums[i];
                nums[i] = temp;
            } else {
                i++;
            }
        }

        for (int j=0; j<size; j++) {
            if (j != nums[j]) {
                return j;
            }
        }
        return size;
    }
}