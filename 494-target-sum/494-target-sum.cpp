class Solution {
public:
    
    int check(vector<int>&a,int n,int t,vector<vector<int>>&dp)
    {
        if(t<0)return 0;
        if(n==0)
        {
            if(t==0&&t==a[0]) return 2;
            if(t==0||t==a[0]) return 1;
            return 0;
        }
        
        if(dp[n][t]!=-1) return dp[n][t];
        int p=check(a,n-1,t-a[n],dp);
        int np=check(a,n-1,t,dp);
        return dp[n][t]=p+np;
    }
    
    int findTargetSumWays(vector<int>& nums, int target)
    {
        int s=0;int n=nums.size();
        for(int i=0;i<nums.size();i++) s+=nums[i];
        if(s-target<0||(s-target)%2) return 0;
        int s1=(s-target)/2;
        vector<vector<int>>dp(n,vector<int>(s1+1,-1));
        return check(nums,n-1,s1,dp);
    }
};