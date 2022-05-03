class Solution {
public:
  void recur(vector<int> &ds, vector<int>& nums, vector<vector<int>> &ans, int freq[] )
  {
    //base case 
    if(ds.size()==nums.size())
     {
        ans.push_back(ds);
        return;
    }
    
    for(int i = 0 ; i<nums.size(); i++)
    {
      if(!freq[i])
      {
        ds.push_back(nums[i]);
        freq[i] = 1;
        recur(ds, nums, ans, freq);
        freq[i]=0;
        ds.pop_back();
      }
    }
  }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
      //vector for storing ans
      vector<vector<int>> ans;
      // vector for data structure used to make permutations
      vector<int> ds;
      //frequency map
      int freq[nums.size()];
      for(int i=0; i<nums.size(); i++)
      {
        freq[i] = 0;
      }
      
      // function call to calculate the permutations
      recur(ds, nums, ans, freq);
      return ans;
        
    }
};