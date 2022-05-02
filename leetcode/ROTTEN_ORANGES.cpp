class Solution {
private:
  bool checkValid(int i, int j, int m , int n)
  {
    if(i<0 || j<0 || i>=m || j>=n)
      return false;
    
    return true;
  }
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
      
      // empty condition checker
      if(grid.empty())
        return 0;
      
      int m = grid.size();
      int n = grid[0].size();
      int days = 0;
      int tot = 0;
      int count = 0; //oranges rotten by traversal
      
      //declaring the queue of pair type
      queue<pair<int,int>> rotten;
      
      for(int i=0; i< grid.size(); i++)
      {
        for(int j=0; j<grid[0].size(); j++)
        {
          //if grid is not equal to zero
          if(grid[i][j]!=0)
            tot++;
          
          //if grid has any rotten orange
          if(grid[i][j]==2)
            rotten.push({i,j});
        }
      }
      
      
      int dx[4] = {0,0,1,-1};
      int dy[4] = {1,-1,0,0};
      
      //implementing bfs
      
      while(!rotten.empty())
      {
        int k = rotten.size();
        count = count + k;
        
        while(k--)
        {
          int x = rotten.front().first;
          int y = rotten.front().second;
          
          rotten.pop();
          
          for(int i=0; i<4; i++)
          {
            int nx = x+dx[i], ny= y+dy[i];
            
            if(nx<0||ny<0||nx>=m||ny>=n || grid[nx][ny]!=1)
              continue;
            
            grid[nx][ny] = 2;
            rotten.push({nx,ny});
          }
        }
        if(!rotten.empty()) 
          days++;
      }
      return tot == count ? days: -1;
    }
};