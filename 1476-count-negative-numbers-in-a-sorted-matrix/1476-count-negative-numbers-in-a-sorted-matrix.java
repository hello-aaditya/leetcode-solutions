class Solution {
    public int countNegatives(int[][] grid) {
        // bruteforce solution
        short negativeNumbers = 0;
        for(int row=0; row<grid.length; row++) {
            for(int col=0; col<grid[0].length; col++) {
                if(grid[row][col] < 0) {
                    negativeNumbers++;
                }
            }
        }
        return negativeNumbers;
    }
}