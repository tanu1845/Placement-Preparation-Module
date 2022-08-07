class Solution {
public:
    
    bool check(vector<int>&a,int n,int k,vector<vector<int>>&dp)
    {
        if(k<0) return false;
        if(k==0) return true;
        if(n==0) return a[0]==k;
        if(dp[n][k]!=-1) return dp[n][k];
        bool p=check(a,n-1,k-a[n],dp);
        bool np=check(a,n-1,k,dp);
        dp[n][k]=p||np;
        return p||np;
    }
    
    bool canPartition(vector<int>& nums)
    {
        int s=0;
        for(int i=0;i<nums.size();i++) s+=nums[i];
        if(s%2==1) return false;
        s=s/2;int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(s+1,-1));
        return check(nums,n-1,s,dp);
        
    }
};