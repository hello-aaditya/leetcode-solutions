class Solution {
public:
    int solve(int row,int col,int prev,vector<vector<int>>& grid,vector<vector<int>> &dp){
        if(row < 0 || col >= grid[0].size() || row >= grid.size() || grid[row][col] <= prev)
        return 0;
         
        if(dp[row][col] != -1) return dp[row][col]; 
        prev = grid[row][col];

        int upright = solve(row-1,col+1,prev,grid,dp);
        int right = solve(row,col+1,prev,grid,dp);
        int diag = solve(row+1,col+1,prev,grid,dp);

        return dp[row][col]=1 + max({upright,right,diag});
    }
    int maxMoves(vector<vector<int>>& grid) {
        //tc : M(for rows)*(n for recursion) // max we travelling grid
        int mostmoves = 0;
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(),-1));
        for (int row = 0; row < grid.size(); row++){ // m = rows
            mostmoves = max(mostmoves,solve(row,0,0,grid,dp)); // 
        }
        return mostmoves > 1 ? mostmoves-1 : 0;
    }
};