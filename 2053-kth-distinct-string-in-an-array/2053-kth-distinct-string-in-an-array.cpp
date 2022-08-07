class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int>m;
        int n=arr.size();
        for(int i=0;i<n;i++)
            m[arr[i]]+=1;
        int c=0;
        string ans="";
        unordered_map<string,int>::iterator it;
        for(int i=0;i<n;i++)
        {
            if( (m.find(arr[i])!=m.end()) && (m[arr[i]]==1))
            {
                c++;
            }
            if(c==k)
                return arr[i];
        }
        return ans;
        
    }
};