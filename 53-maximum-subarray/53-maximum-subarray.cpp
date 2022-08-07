class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int curr=0;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            
            curr=max(curr+nums[i],nums[i]);
            maxx=max(maxx,curr);
    
        }
        return maxx;
    }
};