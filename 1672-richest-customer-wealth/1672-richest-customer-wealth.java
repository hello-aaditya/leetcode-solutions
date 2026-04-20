class Solution {
    public int maximumWealth(int[][] accounts) {
        int rowSize = accounts.length;
        int colSize = accounts[0].length;

        // int[] totalMoney = new int[colSize];
        int maxWealth = 0;
        for (int row=0; row<rowSize; row++) {
            int currentWealth = 0;
            for (int col=0; col<colSize; col++) {
                currentWealth = currentWealth + accounts[row][col];
            }
            // totalMoney[row] = currentWealth;
            maxWealth = Math.max(currentWealth, maxWealth);
        }
        return maxWealth;
    }
}