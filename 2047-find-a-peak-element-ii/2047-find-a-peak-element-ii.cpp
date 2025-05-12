class Solution {
public:
    int findMaxRowIndex(vector<vector<int>>& mat, int col, int rowSize)
    {
        int maxRowIndex = -1, maxi = INT_MIN;
        for(int row=0; row<rowSize; row++)
        {
            if(mat[row][col] > maxi)
            {
                maxi = mat[row][col];
                maxRowIndex = row;
            }
        }
        return maxRowIndex;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rowSize = mat.size();
        int colSize = mat[0].size();

        int left = 0, right = colSize-1;
        while(left<=right)
        {
            int mid = (left & right) + ((left ^ right) >> 1);
            int maxRowIndex = findMaxRowIndex(mat, mid, rowSize);

            int leftVal = ( (mid-1)>=0 ) ? mat[maxRowIndex][mid-1] : INT_MIN;
            int rightVal = ( (mid+1)<colSize )? mat[maxRowIndex][mid+1] : INT_MIN;

            if( (mat[maxRowIndex][mid] > leftVal) && (mat[maxRowIndex][mid] > rightVal) )
            {
                return {maxRowIndex, mid};
            }
            else if(mat[maxRowIndex][mid] < leftVal)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return {};
    }
};