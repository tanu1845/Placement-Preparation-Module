class Solution {
public:
    int nthUglyNumber(int n) 
    {
        int a[n];
        a[0]=1;
        int i2=0,i3=0,i5=0;
        int n2=2,n3=3,n5=5;
        for(int i=1;i<n;i++)
        {
            int next=min(n2,min(n3,n5));
            a[i]=next;
            if(next==n2)
            {
                i2+=1;
                n2=a[i2]*2;
            }
            if(next==n3)
            {
                i3+=1;
                n3=a[i3]*3;
            }
            if(next==n5)
            {
                i5+=1;
                n5=a[i5]*5;
            }
        }
        return a[n-1];
        
    }
};