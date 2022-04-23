class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
      vector<int> ans;
      
      int l = 0;
      int r = numbers.size()-1;
      
      while(l<r)
      {
        if(numbers[l]+numbers[r]==target)
        {
          ans.push_back(++l);
          ans.push_back(++r);
          return ans;
          
        }
        else if(numbers[l] + numbers[r] > target){
            r--;
        }
        else{
            l++;
        }
          
      }
      return ans;
    }
};