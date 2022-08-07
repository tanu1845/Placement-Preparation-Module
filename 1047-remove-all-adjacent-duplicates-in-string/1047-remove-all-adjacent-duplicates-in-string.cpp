class Solution {
public:
    string removeDuplicates(string s)
    {
        int n=s.size();
        int i=1;
        while(i<n)
        {
            
            if(i>0&&(s[i]==s[i-1]))
            {
                s.erase(i-1,2);
                i=i-2;
            }
            else
            {
                i++;
                
            }
        }
        return s;
    }
};