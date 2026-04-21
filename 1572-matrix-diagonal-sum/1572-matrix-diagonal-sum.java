class Solution {
    public int diagonalSum(int[][] mat) {
        int size = mat.length;

        int sum = 0;
        for (int i=0; i<size; i++) {
            // SUM OF PRIMARY DIAGONAL
            int row = i, col=i;
            sum += mat[row][col];

            // SUM OF SECONDARY DIAGONAL
            col = size-i-1;
            sum += mat[row][col];
        }
        // mat[n][n] -> n IS ODD THEN SUBTRACT mat[n/2][n/2]
        if ((size & 1) == 1) {
            sum -= mat[size/2][size/2];
        }
        return sum;
    }
}