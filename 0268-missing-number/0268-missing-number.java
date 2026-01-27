class Solution {
    public int missingNumber(int[] nums) {
        /* 
            Approach: find the sum of all natural number till n+1 and minus the total 
            sum to each of the elements present inside the array
         */

         // FIND THE TOTAL SUM TILL size + 1
        int size = nums.length;

        int totalSum = size * (size + 1) / 2;

        for (int i=0; i<size; i++) {
            totalSum -= nums[i];
        }
        return totalSum;
        
    }
}