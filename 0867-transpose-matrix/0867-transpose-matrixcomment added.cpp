class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        // original matrix = rowSize * colSize;
        // transposed matrix = colSize * rowSize;
        vector<vector<int>> transposedMatrix(colSize, vector<int>(rowSize));

        for(int row=0; row<rowSize; row++)
        {
            for(int col=0; col<colSize; col++)
            {
                transposedMatrix[col][row] = matrix[row][col];
            }
        }
        return transposedMatrix;
    }
};