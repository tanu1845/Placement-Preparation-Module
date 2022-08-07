class Solution {
public:
    
    bool valid(int i,int j,vector<vector<int>>& board)
    {
        return ( (i>=0&&i<board.size() ) && (j>=0&&j<board[0].size()) );
            
    }
    
    void gameOfLife(vector<vector<int>>& board) 
    {
        int x[]={0,0,1,1,1,-1,-1,-1};
        int y[]={1,-1,1,-1,0,0,1,-1};
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                int c=0;
                for(int k=0;k<8;k++)
                {
                    int currx=i+x[k];int curry=j+y[k];
                    if( valid(currx,curry,board) &&abs(board[currx][curry])==1)
                    c+=1;
                    
                }
                if(board[i][j]==1 && c>3)
                board[i][j]=-1;
            else if(board[i][j]==1&&c<2)
                board[i][j]=-1;
            else if(board[i][j]==0&&c==3)
                board[i][j]=2;
                
            }
            
            
            
            
        }
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]>=1)
                    board[i][j]=1;
                else
                    board[i][j]=0;
            }
        }
        
    }
};