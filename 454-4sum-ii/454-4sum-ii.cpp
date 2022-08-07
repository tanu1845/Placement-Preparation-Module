class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        
        unordered_map<int,int>map;
        
        for(auto i:nums1)
        {
            for(auto j:nums2)
            {
                map[i+j]+=1;
            }
        }
        int c=0;
        for(auto k:nums3)
        {
            for(auto l:nums4)
            {
                c+=map[-k-l];
            }
        }
        
        return c;
        
        
    }
};