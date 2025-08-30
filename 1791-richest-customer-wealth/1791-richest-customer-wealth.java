class Solution {
    public int maximumWealth(int[][] accounts) {
        int rich = Integer.MIN_VALUE;
        for(int row=0; row<accounts.length; row++) {
            int sumOfARow = 0;
            for(int col=0; col<accounts[row].length; col++) {
                sumOfARow += accounts[row][col];
            }
            if(sumOfARow > rich) {
                rich = sumOfARow;
            }
        }
        return rich;
    }
}