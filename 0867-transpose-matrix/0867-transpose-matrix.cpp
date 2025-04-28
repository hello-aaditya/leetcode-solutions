class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowofOriginalMatrix = matrix.size();
        int colOfOriginalMatrix = matrix[0].size();

        // original matrix = rowofOriginalMatrix * colOfOriginalMatrix;
        // transposed matrix = colOfOriginalMatrix * rowofOriginalMatrix;

        int rowsOftransposedMatrix = colOfOriginalMatrix;
        int colOftransposedMatrix = rowofOriginalMatrix;
        vector<vector<int>> transposedMatrix(rowsOftransposedMatrix, vector<int>(colOftransposedMatrix, 0));

        for(int row=0; row<rowsOftransposedMatrix; row++)
        {
            for(int col=0; col<colOftransposedMatrix; col++)
            {
                transposedMatrix[row][col] = matrix[col][row];
            }
        }
        return transposedMatrix;
    }
};