class Solution {
public:

    
    bool validPath(int n, vector<vector<int>>& edges, int a, int b) 
    {
        
        if(a==b) return true;
        vector<int>adj[n];
      
        
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        

        vector<int>vis;
        for(int i=0;i<n;i++)
            vis.push_back(0);
        queue<int>pending;
        pending.push(a);
        vis[a]=1;
        
        while(!pending.empty())
        {
            int curr=pending.front();pending.pop();
            
            for(auto i:adj[curr])
            {
                if(!vis[i])
                {
                    vis[i]=1;
                    pending.push(i);   
                }
            }
            
            if(vis[b]) return true;
            
        }
        return false;
        
        
        
        
    }
};