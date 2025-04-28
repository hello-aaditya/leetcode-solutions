class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        int sum = 0;
        for(int row=0; row<size; row++)
        {
            // give addition of primary diagonal
            sum+=mat[row][row];

            // give sum of secondary diagonal
            int col = (size-row)-1;

            // this condition make sure to exclude the mutual element
            if(row!=col)
            {
                sum+=mat[row][col];
            }
        }
        return sum;
    }
};