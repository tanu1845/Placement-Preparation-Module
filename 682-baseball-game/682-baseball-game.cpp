class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int>sol;
        int ans=0;
        for(int i=0;i<ops.size();i++)
        {
            int size=sol.size();
            if (ops[i]=="C")
            {
                sol.pop_back();
            }
            else if(ops[i]=="D")
            {
                sol.push_back(sol[size-1]*2);
            }
            else if(ops[i]=="+")
            {
                sol.push_back(sol[size-1]+sol[size-2]);
                
            }
            else 
            {
                sol.push_back(stoi(ops[i]));
                
            }
                
        }
        for(int i=0;i<sol.size();i++)
            ans+=sol[i];
        return ans;
        
    }
};