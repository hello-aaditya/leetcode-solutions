class Solution {
    public int findMiddleIndex(int[] nums) {
        int size = nums.length;
        
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }

        int cumulativeSum = 0;
        for (int i=0; i<size; i++) {
            int leftSum = cumulativeSum;
            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }
            cumulativeSum += nums[i];
        }
        
        return -1;
    }
}