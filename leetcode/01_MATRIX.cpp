class Solution {
private:
  bool checkValid(int i, int j, int m , int n)
  {
    if(i<0 || j<0 || i>=m || j>=n)
      return false;
    
    return true;
  }
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
      //create a queue of type pair to pass the co-ordinates
      queue<pair<int,int>> q;
      
      //create ans vector and declare every space with -1 which means its not visited
      vector<vector<int>> ans(mat.size(), vector<int> (mat[0].size(),-1));
      
      //traversing the matrix to check if space contains the 0 value then push that value to the queue
      for(int i=0; i< mat.size(); i++)
      {
        for(int j=0; j< mat[0].size(); j++)
        {
          if(mat[i][j]==0)
          {
            q.push({i,j});
            ans[i][j]= 0;
          }
        }
      }
      
      //implimenting bfs
      int m = mat.size();
      int n = mat[0].size();
      
      while(!q.empty())
      {
        int i = q.front().first;
        int j = q.front().second;
        
        //check for its neighbour, if they are valid and not visited, then add them to the queue
        //Top
        if(checkValid(i+1,j,m,n) && ans[i+1][j]==-1)
        {
          q.push({i+1,j});
          ans[i+1][j] = ans[i][j] + 1;
        }
        //Down
        if(checkValid(i-1,j,m,n) && ans[i-1][j]==-1)
        {
          q.push({i-1,j});
          ans[i-1][j] = ans[i][j] + 1;
        }
        //Left
        if(checkValid(i,j+1,m,n) && ans[i][j+1]==-1)
        { 
          q.push({i,j+1});
          ans[i][j+1] = ans[i][j] + 1;
        }
        //Right
        if(checkValid(i,j-1,m,n) && ans[i][j-1]==-1)
        { 
          q.push({i,j-1});
          ans[i][j-1] = ans[i][j] + 1;
        }
        //poping the element from the q to avoid infinite loop
        q.pop();
      }
      
      return ans;
    }
};