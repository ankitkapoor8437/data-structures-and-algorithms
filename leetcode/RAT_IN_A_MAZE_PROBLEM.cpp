bool isSafe(int nx, int ny, vector < vector < int >> & arr, vector<vector<bool>> &vis, int n )
{
	if((nx>=0 && nx<n) && (ny>=0 && ny<n) && vis[nx][ny]==0 && arr[nx][ny]==1)
		return true;
	else
		return false;
}

void solve(int x, int y, vector<vector<int>> & arr, int n,  vector<string> &ans, vector<vector<bool>> &vis, string path)
{
	//base case when the rat will reach the destination
	if(x == n-1 && y == n-1)
	{
		ans.push_back(path);
		return;
	}
	
	//now checking all the four directions in lexical order D,L,R,U
	vis[x][y] = 1;
	//Down
	if(isSafe(x+1,y,arr,vis, n))
	{
		solve(x+1,y, arr, n,  ans, vis, path + 'D');
	}
	
	//Left
	if(isSafe(x,y-1,arr,vis, n))
   	{
	   solve(x,y-1, arr, n, ans, vis, path + 'L');
	}	
	   
	//Right
	if(isSafe(x,y+1,arr,vis, n))
	   {
		   solve(x,y+1, arr, n,  ans, vis, path + 'R');
	   }
	   
	//Up
	if(isSafe(x-1,y,arr,vis, n))
	   {
		   solve(x-1,y, arr, n, ans, vis,  path + 'U');
	   }
	   
	vis[x][y] = 0;
}


vector < string > searchMaze(vector < vector < int >> & arr, int n) 
{
	//vector string to store ans 
	vector<string> ans;
	//creating visited array
	vector<vector<bool>> visited(n, vector<bool> (n,0));
	//creating a empty string to save the moved path
	string path ="";
	
	//condition to check if the (0,0) position contains a legal path or not that is 1
	if(arr[0][0]==0)
		return ans;
	
	//creating function to calculate the path
	solve(0,0, arr, n, ans, visited,  path); 
	
	return ans;
}