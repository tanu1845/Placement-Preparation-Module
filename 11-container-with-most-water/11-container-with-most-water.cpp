class Solution {
public:
    int maxArea(vector<int>& h )
    {
        int r=h.size()-1;
        int l=0;
        int area=0;
        while(l<r)
        {
            int a=min(h[l],h[r])*(r-l);
            area=max(area,a);
            if(h[l]<=h[r])l++;
            else r--;
        }
        return area;
            
    }
};