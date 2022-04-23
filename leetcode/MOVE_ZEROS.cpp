class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(n);
      int l=0;

      
      for(int i=0; i<nums.size(); i++)
      {
        if(nums[i]!=0)
          {
           ans[l++] = nums[i];
          }
      }
      nums = ans;
    }
};

//using swap
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        
        for(int j = 0; j<nums.size(); j++){
            if(nums[j]!=0){
                swap(nums[j], nums[i]);
                i++;
            }
        }
        
    }
};