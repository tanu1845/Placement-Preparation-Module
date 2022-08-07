class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        unordered_map<int,int>map;
        stack<int>st;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty()&&nums[i%n]>=st.top())
                st.pop();
            
            if(i<n)
            {
                if(!st.empty())
                    map[i]=st.top();
            }
            st.push(nums[i%n]);
            
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            
            if(map.find(i)!=map.end())
                ans.push_back(map[i]);
            else
                ans.push_back(-1);
            
        }
        return ans;
        
    }
};