class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        vector<vector<int>> temp = matrix;

        for(int row=0; row<rowSize; row++)
        {
            int rotatedRow = 0;
            for(int col=0; col<colSize; col++)
            {
                temp[rotatedRow++][rowSize-1-row] = matrix[row][col];
            }
        }

        matrix = temp;
        return ;
    }
};