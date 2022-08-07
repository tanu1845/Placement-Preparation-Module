class Solution {
public:
    
    int unique(int n,int m, vector<vector<int>>&A,vector<vector<int>>&dp)
    {
        if(n>=0&&m>=0&&A[n][m]==1)
        {
            dp[n][m]=0;
            return 0;
        }
        if(n==0&&m==0)
        {
            dp[0][0]=1;
            return 1;
        }
        if(n<0||m<0)
        {
            return 0;
        }
        if(dp[n][m]!=-1) return dp[n][m];
        
        int left=unique(n,m-1,A,dp);
        int up=unique(n-1,m,A,dp);
        dp[n][m]=left+up;
        return left+up;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>&A)
    {
        int n=A.size();
        int m=A[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return unique(n-1,m-1,A,dp);
    }
};