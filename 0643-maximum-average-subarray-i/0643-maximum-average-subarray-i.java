class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int size = nums.length;
        int start = 0;
        double maxAverage = Double.NEGATIVE_INFINITY;
        double sum = 0.0;

        for (int end=0; end<size; end++) {
            int windowSize = end-start+1;
            sum += nums[end];

            if (windowSize == k) {
                double currentAverage = sum / (k*1.0);
                maxAverage = Math.max(maxAverage, currentAverage);
                sum -= nums[start];
                start++;
            }

        }
        return maxAverage;
    }
}