class Solution {
public:
    int findNumberOfLIS(vector<int>& a) 
    {
        int n=a.size();
        int output[n];
        int count[n];
        output[0]=1;
        count[0]=1;
        for(int i=1;i<n;i++)
        {
            count[i]=1;
            output[i]=1;
            int j=i-1;
            while(j>=0)
            {
                if(a[j]<a[i] && output[j]+1>output[i] )
                {
                    output[i]=max(output[i],output[j]+1);
                    count[i]=count[j];
                }
                else if(a[j]<a[i] && output[j]+1==output[i])
                {
                    // output[i]=max(output[i],output[j]+1);
                    count[i]+=count[j];
                }
                j--;
            }
        }
        int ans=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(ans<output[i])
            {
                ans=output[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ans==output[i])
                c+=count[i];
        }
        
        return c;
    }
};