class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m-1;
        int left = 0, right = n-1;

        vector<int> answer;
        while(top<=bottom && left<=right)
        {
            //print top-order
            for(int col=left; col<=right; col++)
            {
                answer.push_back(matrix[top][col]);
            }
            top++;

            //print right order
            for(int row=top; row<=bottom; row++)
            {
                answer.push_back(matrix[row][right]);
            }
            right--;

            //print bottom-order
            if(top<=bottom)
            {
                for(int col=right; col>=left; col--)
                {
                    answer.push_back(matrix[bottom][col]);
                }
                bottom--;
            }
            
            //print left-order
            if(left<=right)
            {
                for(int row=bottom; row>=top; row--)
                {
                    answer.push_back(matrix[row][left]);
                }
                left++;
            }
        }
        return answer;
    }
};