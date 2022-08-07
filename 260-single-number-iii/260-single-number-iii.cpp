
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        long long a=0;
        for(int i=0;i<nums.size();i++)
        {
            a=a^nums[i];
        }
        int rms= a & -a;
        
        int c=0;
        int d=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if( (rms&nums[i]) ==0)
                c=c^nums[i];
            else
                d=d^nums[i];
        }
        
        
        
        return {c,d};
        
    }
};