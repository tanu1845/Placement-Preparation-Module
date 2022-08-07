class Solution {
public:
    typedef long long ll;
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)    
        {
            
                for(int j=i+1;j<nums.size();j++)
                {

                        long long t=(ll)target-nums[i]-nums[j];
                        ll lo=j+1;
                        ll hi=nums.size()-1;
                        while(lo<hi)
                        {
                            if((ll)nums[lo]+nums[hi]==t)
                            {
                                vector<int>v;
                                v.push_back(nums[i]);
                                v.push_back(nums[j]);
                                v.push_back(nums[lo]);
                                v.push_back(nums[hi]);
                                ans.push_back(v);

                                while(lo<hi&&nums[lo]==nums[lo+1]) lo++;
                                while(lo<hi&&nums[hi]==nums[hi-1]) hi--;
                                    lo++;
                                hi--;
                            }
                            else if((ll)nums[lo]+nums[hi]<t)
                                lo++;
                            else
                                hi--;
                        }
                    while(j+1<nums.size()&&nums[j]==nums[j+1])j++;
                }
            
            while(i+1<nums.size()&&nums[i]==nums[i+1])i++;
            
                
                
            
        }
        return ans;
    }
};