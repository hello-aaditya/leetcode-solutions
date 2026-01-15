class Solution {
    public int maxProfit(int[] prices) {
        int size = prices.length;

        int[] left = new int[size];
        int[] right = new int[size];

        left[0] = prices[0];
        right[size-1] = prices[size-1];

        // CALCULATE MIN PRICE AND STORE IN 'left'
        for (int i=1; i<size; i++) {
            left[i] = Math.min(left[i-1], prices[i]);
        }

        // CALCULATE MAX PRICE AND STORE IN 'right'
        for (int i=size-2; i>=0; i--) {
            right[i] = Math.max(right[i+1], prices[i]);
        }

        int profit = 0;

        // COUNT MAX PROFIT BY SUBTRACTING MAX PRICE - MIN PRICE AND CONSIDER THE MAX PROFIT
        for (int i=0; i<size; i++) {
            profit = Math.max(profit, right[i] - left[i]);
        }
        return profit;
    }
}