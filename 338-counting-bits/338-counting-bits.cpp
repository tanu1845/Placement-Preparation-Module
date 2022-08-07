class Solution {
public:
    vector<int> countBits(int n) 
    {
        // vector<int>v;
        // for(int i=0;i<n+1;i++)
        // {
        //     int c=0;
        //     int x=i;
        //     while(x>0)
        //     {
        //         int rms=(x&-x);
        //         x-=rms;
        //         c++;
        //     }
        //     v.push_back(c);
        // }
        // return v;
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<n+1;i++)
        {
            if(i%2==0)
                v.push_back(v[i/2]);
            else
                v.push_back(v[i-1]+1);
        }
        return v;
    }
};