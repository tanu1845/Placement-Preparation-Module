class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums2.size();
        unordered_map<int,int>map;
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<nums2[i])
                st.pop();
            if(st.empty())
            {
                map[nums2[i]]=-1;
                st.push(nums2[i]);
            }
            else
            {
                map[nums2[i]]=st.top();
                st.push(nums2[i]);
            }
           
            
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            if(map.find(nums1[i])!=map.end())
            {
                ans.push_back(map[nums1[i]]);
            }
            else
                ans.push_back(-1);
        }
        return ans;
    }
    
};