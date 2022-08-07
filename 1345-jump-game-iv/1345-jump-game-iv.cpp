class Solution {
public:
    int minJumps(vector<int>& arr)
    {
        int n=arr.size();
        int step=0;
        
        unordered_map<int,vector<int>>map;
        
        for(int i=0;i<n;i++)
        {
            map[arr[i]].push_back(i);
        }
        
        
        vector<bool>vis(n);
        vis[0]=true;
        
        
        queue<int>pending;
        pending.push(0);
        while(!pending.empty())
        {
            for(int i=pending.size();i>0;i--)
            {
                int curr=pending.front();
                pending.pop();
                
                if(curr==n-1)
                    return step;
                
                vector<int>& next=map[arr[curr]];
                next.push_back(curr-1);
                next.push_back(curr+1);
                
                for(int j:next)
                {
                    if(j>=0&&!vis[j]&&j<n)
                    {
                        vis[j]=true;
                        pending.push(j);
                    }
                }
                map[arr[curr]].clear();
                
            }
            step++;
        }
        return step;
        
    }
};







