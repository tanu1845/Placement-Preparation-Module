class Solution {
public:
    int maxScore(vector<int>& a, int k)
    {
        int total=0;
        for(auto i:a)
            total+=i;
        
        int ans=0;
        int window=0;
        int n=a.size();
        for(int i=0;i<n-k-1;i++)
            window+=a[i];
        
        for(int i=n-k-1;i<a.size();i++)
        {
            
            window+=a[i];
            ans=max(ans,total-window);
            window-=a[i-(n-k-1)];
            
        }
        if(n==k) return total;
        return ans;
        
    }
};