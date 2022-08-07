class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int prev2=0;
        int prev=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            int p=nums[i]+prev2;
            int np=prev;
            int curr=max(p,np);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};