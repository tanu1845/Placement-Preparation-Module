class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int t=((i*m)+j+k)%(m*n);
                int r=t/m;
                int c=t%m;
                ans[r][c]=grid[i][j];
            }
        }
        return ans;
        
    }
};