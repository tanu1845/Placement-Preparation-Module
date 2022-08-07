class Solution {
public:
    bool isValid(string s)
    {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
            {
                st.push(s[i]);
            }
            
            else
            {
                if(st.size()==0)
                    return false;
                if((s[i]==')'&&st.top()!='(')||(s[i]==']'&&st.top()!='[')||(s[i]=='}'&&st.top()!='{'))
                    return false;
                else
                    st.pop();
            }
        }
        if(st.size()==0)
            return true;
        else
            return false;
    }
};