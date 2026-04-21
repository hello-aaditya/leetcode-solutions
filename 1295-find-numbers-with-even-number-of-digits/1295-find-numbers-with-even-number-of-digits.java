class Solution {
    public int findNumbers(int[] nums) {
        int size = nums.length;
        
        int evenCount = 0;
        for (int i=0; i<size; i++) {
            int current = nums[i];
            int totalDigit = (current==0) ? 1 : (int)Math.floor(Math.log10(Math.abs(current)) + 1);

            if ( (totalDigit & 1) == 0) {
                evenCount++;
            }
        }
        return evenCount;
    }
}