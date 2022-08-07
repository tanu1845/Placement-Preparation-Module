class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        start=start^goal;
        int count=0;
        while(start)
        {
            int rms=start&-start;
            start-=rms;
            count++;
        }
        return count;
        
    }
};