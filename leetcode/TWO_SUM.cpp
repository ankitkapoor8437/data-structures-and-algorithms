class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int sum = 0;
        for(int i=0; i<nums.size()-1; i++)
        {
          for(int j=i; j< nums.size()-1; j++)
          {
              sum= nums[i] + nums[j+1];
              if(sum==target)
              {
                  ans.push_back(i);
                  ans.push_back(j+1);
              }
          }
        }
        return ans;
    }
};