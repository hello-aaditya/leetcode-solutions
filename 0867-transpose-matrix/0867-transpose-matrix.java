class Solution {
    public int[][] transpose(int[][] matrix) {
        int rowSize = matrix.length;
        int colSize = matrix[0].length;

        int[][] t = new int[colSize][rowSize];
        for (int row=0; row<rowSize; row++) {
            for (int col=0; col<colSize; col++) {
                t[col][row] = matrix[row][col];
            }
        }

        return t;
    }
}