class Solution {
public:
    string removeDuplicates(string s, int k)
    {
        int n=s.length();
        
        stack<pair<char,int>>st;
        
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
            {
                st.push({s[i],1});
            }
            else
            {
                if(st.top().first==s[i])
                {
                    int freq=st.top().second+1;
                    st.pop();
                    st.push({s[i],freq});
                }
                else
                {
                    st.push({s[i],1});
                }
                
                if(st.top().second==k)
                {
                    st.pop();
                }
            }
        }
     
        
        
        string ans="";
        while(st.size())
        {
            int count=st.top().second;
            while(count--)
            {
                ans+=st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};