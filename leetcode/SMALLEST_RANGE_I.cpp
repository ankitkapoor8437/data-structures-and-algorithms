#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int sum(vector<int> ans, int k){

    int mini =*std::min_element(ans.begin(), ans.end());
    int maxi =*std::max_element(ans.begin(), ans.end());
    int result = 0;
    
    maxi = maxi - k;
    mini = mini + k;
    
    result = maxi - mini;
   
    return max(0,result);   

}





int main()
{

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    int k = 3;
    int n = nums.size();

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        // ans[i] = nums[i] + k;
        ans.push_back(nums[i] + k);
    }
    


    for (int i = 0; i < n; i++)
    {
        cout<< nums[i]<< " ";
    }
    cout<< endl;

    for (int i = 0; i < n; i++)
    {
        cout<< ans[i]<< " ";
    }
    cout<< endl;

   int result = sum(ans, k);

   cout<< result;

    return 0;
}
