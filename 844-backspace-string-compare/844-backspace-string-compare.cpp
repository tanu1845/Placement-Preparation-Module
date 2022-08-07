class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        
        string a="",b="";
        int count=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            
            if(s[i]=='#')
                count++;
            else
            {
                if(count==0)
                    a+=s[i];
                else
                    count--;
            }
        }
        count=0;
        for(int i=t.size()-1;i>=0;i--)
        {
            
            if(t[i]=='#')
                count++;
            else
            {
                if(count==0)
                    b+=t[i];
                else
                    count--;
            }
        }
        return a==b?true:false;
        
    }
};