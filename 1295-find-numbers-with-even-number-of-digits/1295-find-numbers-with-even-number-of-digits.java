class Solution {
    public int findNumbers(int[] nums) {
        int size = nums.length;
        
        int count = 0;
        for (int i=0; i<size; i++) {
            int digit = countDigit(nums[i]);

            if ( (digit & 1) == 0) {
                count++;
            }
        }
        return count;
    }
    public static int countDigit(int num) {
        String len = num + "";
        return len.length();
    }
}