class Solution {
public:
    
    int mins(int n,int m, vector<vector<int>>& A,vector<vector<int>>& dp)
    {
        
        if(n==0&&m==0)
        {
            dp[0][0]=A[0][0];
            return A[0][0];
        }
        if(n<0||m<0)
            return 1e9+7;
        if(dp[n][m]!=-1) return dp[n][m];
        int left=A[n][m]+mins(n,m-1,A,dp);
        int top=A[n][m]+mins(n-1,m,A,dp);
        dp[n][m]=min(top,left);
        return min(top,left);
        
    }
    
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return mins(n-1,m-1,grid,dp);
    }
};