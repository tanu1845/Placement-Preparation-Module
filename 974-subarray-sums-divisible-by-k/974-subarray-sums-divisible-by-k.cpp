class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        
        int s=0;
        unordered_map<int,int>map;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(s%k==0)
                c+=1;
            int r=s%k;
            if(r<0)
                r+=k;
            
            if(map.find(r)!=map.end())
            {
                c+=map[r];
            }
            map[r]+=1;
            
            
        }
        return c;
    }
};