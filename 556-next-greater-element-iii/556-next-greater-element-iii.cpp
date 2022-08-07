class Solution {
public:
    int nextGreaterElement(int n) 
    {
        int m=n;
        int l=0;
        while(n)
        {
            l++;
            n=n/10;
        }
        n=m;
        int a[l];
        int j=0;
        while(n)
        {
            a[j++]=n%10;
            n=n/10;
        }
        reverse(a,a+l);
        int i1=-1;
        for(int i=l-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                i1=i;
                break;
            }
        }
        if(i1==-1)
            return -1;
        for(int i=l-1;i>=0;i--)
        {
            if(a[i]>a[i1])
            {
                int temp=a[i];
                a[i]=a[i1];
                a[i1]=temp;
                break;
            }
        }
        reverse(a+i1+1,a+l);
        // reverse(a,a+l);
        long long x=0;
        for(int i1=0;i1<l;i1++)
        {
            x=(x*10)+a[i1];
        }
        if(x>INT_MAX)
            return -1;
        return x;
        
    }
};