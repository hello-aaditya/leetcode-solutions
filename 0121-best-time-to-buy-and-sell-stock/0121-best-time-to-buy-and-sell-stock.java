class Solution {
    public int maxProfit(int[] prices) {
        // KADANE'S ALGORITHM
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i=0; i<prices.length; i++) {
            int currentProfit = prices[i] - minPrice;
            maxProfit = Math.max(currentProfit, maxProfit);
            minPrice = Math.min(minPrice, prices[i]);
        }

        return maxProfit;
    }
}