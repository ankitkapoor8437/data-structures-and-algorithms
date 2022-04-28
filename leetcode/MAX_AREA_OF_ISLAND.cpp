class Solution {
private:
  //function to get the area
  int getArea(int i, int j, vector<vector<int>>& grid)
  {
    // boundry conditions
    if(i<0||i>=grid.size()||j<0||j>=grid[0].size())
      return 0;
    //if it encounters already visited cells or water area which is demnoted by zero
    else if(grid[i][j]<=0)
      return 0;
    
    grid[i][j]=-1;
    
    int top =  getArea(i+1,j, grid);
    int down =  getArea(i-1,j, grid);
    int left =  getArea(i,j+1, grid);
    int right =  getArea(i,j-1, grid);
    
    //returing the ans with +1 as we marked it as -1 and it should also get included in the area.
    int total = 1 + top + down + left + right;
    
    return total;
  }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
      int rows = grid.size();
      int cols = grid[0].size();
      
      int maxArea = 0;
      
      //traversing the matrix 
      for(int i=0; i<rows; i++)
      {
        for(int j=0; j<cols; j++)
        {
          // if we encounter a 1 than call function.
          if(grid[i][j]==1)
            maxArea = max(maxArea, getArea(i,j, grid));
        }
      }
      return maxArea;
    }
};