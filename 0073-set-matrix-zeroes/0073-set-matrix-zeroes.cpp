class Solution {
public:
    void makeZeros(vector<vector<int>>& matrix, int row, int col)
    {
        //make row '0'
        for(int j=0; j<matrix[0].size(); j++)
        {
            matrix[row][j] = 0;
        }

        //make col '0'
        for(int i=0; i<matrix.size(); i++)
        {
            matrix[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<pair<int, int>> coordinates;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    coordinates.push_back( {i, j} );
                }
            }
        }

        for(int i=0; i<coordinates.size(); i++)
        {
            makeZeros(matrix, coordinates[i].first, coordinates[i].second);
        }
    }
};