#include <algorithm>
#include <iostream>
 
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count=0;
    
        sort(nums.begin(), nums.end());
        
        if(nums.size()<=1)
            return false;
        else
        {
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
            }
        }
        }
        if(count==0)
            return false;
        else
            return true;
    }
        
};