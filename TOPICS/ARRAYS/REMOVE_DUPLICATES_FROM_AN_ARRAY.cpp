#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int remove(vector<int>& nums)
{
    return unique(nums.begin(),nums.end())-nums.begin();
}

int removed(vector<int>& nums)
{
    if (nums.size()==0) 
    {
        return 0;
    }
    
    int left = 0;
    for (int right = 1; right < nums.size(); right++)
    {
        if (nums[left]!=nums[right])
        {
            left++;
            nums[left]==nums[right];
        }
    return left+1;
    }
    
}


int main()
{
    vector<int> test;

    test.push_back(1);
    test.push_back(1);
    test.push_back(2);
    test.push_back(2);
    test.push_back(3);

    for (int i = 0; i < test.size(); i++)
    {
        cout<< test[i]<<' ';
    }
    cout<<endl;

    // remove(test);
    removed(test);
    
    for (int i = 0; i < test.size(); i++)
    {
        cout<< test[i]<<' ';
    }
    cout<<endl;


    return 0;   
}