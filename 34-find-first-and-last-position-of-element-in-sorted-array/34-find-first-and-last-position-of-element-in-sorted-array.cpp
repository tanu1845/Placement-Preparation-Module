class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int h=nums.size()-1;
        int h2=h;
        int l=0,l2=0;
        int i1=-1,i2=-1;
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(nums[mid]==target)
            {
                i1=mid;
                h=mid-1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        
        while(l2<=h2)
        {
            int mid=(l2+h2)/2;
            
            if(nums[mid]==target)
            {
                i2=mid;
                l2=mid+1;
            }
            else if(nums[mid]<target)
                l2=mid+1;
            else
                h2=mid-1;
        }
        vector<int>ans;
        ans.push_back(i1);
        ans.push_back(i2);
        return ans;
        
    }
};