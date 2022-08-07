class Solution {
public:
    int check(vector<int>&a,int n,int t,vector<vector<int>>&dp)
    {
        if(t==0)
        {
            return 0;
        }
        if(n==0)
        {
            if(t%a[0]) return 1e9;
            return t/a[0];
        }
        if(dp[n][t]!=-1) return dp[n][t];
        int p=1e9;
        if(t>=a[n])
            p=1+check(a,n,t-a[n],dp);
        int np=check(a,n-1,t,dp);
        return dp[n][t]=min(p,np);
    }
    
    int coinChange(vector<int>& coins, int k) 
    {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        if (check(coins,n-1,k,dp)>=1e9) return -1;
        else return check(coins,n-1,k,dp);
        
    }
};