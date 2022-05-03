class Solution {
private:
  vector<vector<int>> ans;
  void backtrack(int begin, int k, vector<int> &current, int n)
  {
    //base case
    if(current.size()==k)
      return ans.push_back(current);
    
    for(int i=begin; i< n+1; i++)
    {
      current.push_back(i);
      backtrack(i+1,k, current,n);
      current.pop_back();
    }
  }
  
public:
    vector<vector<int>> combine(int n, int k) 
    {
      vector<int> current;
      
      backtrack(1,k, current,n);
      
      return ans;
        
    }
};