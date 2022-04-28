class Solution 
{
private:
  void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int rows, int cols, int source)
  {
    //condition to check if sr or sc are out of bounds or not.
    if(sr<0||sr>=rows||sc<0||sc>=cols)
      return;
    //to check if the values are same or not
    else if(image[sr][sc]!=source)
      return;
    
    image[sr][sc] = newColor;
    
    dfs(image, sr+1, sc, newColor, rows, cols, source); //TOP
    dfs(image, sr-1, sc, newColor, rows, cols, source); //DOWN
    dfs(image, sr, sc+1, newColor, rows, cols, source); //LEFT
    dfs(image, sr, sc-1, newColor, rows, cols, source); //RIGHT
  
  }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
      ///first check that if image[sr][sc] colour and new color is same or not
      if(image[sr][sc]==newColor)
        return image;
      
      // calculate rows, cols and source
      int rows = image.size();
      int cols = image[0].size();
      int source = image[sr][sc];
      
     //function call to dfs
      dfs(image, sr, sc, newColor, rows, cols, source);
      return image;
    }
};