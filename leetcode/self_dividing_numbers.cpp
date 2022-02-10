#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void selfd(int num)
{   
    int ans = 0;
    int i = 0;
    int test = num;
    while (num!=0)
    {   
        int digit = num%10;
        if (test%digit ==0)
        {
            ans = (pow(10,i) * digit ) + ans;
            i++;
        }   
        num = num/10;
        
    }
    cout<< ans;
}



class Solution {
private:
int selfd(int num)
{   
    int ans = 0;
    int i = 0;
    int test = num;
    while (num!=0)
    {   
        int digit = num%10;
        if(digit==0)
        {
            return ans;
        }
        else if(test%digit==0)
        {
            ans = (pow(10,i) * digit ) + ans;
            i++;
        }   
        num = num/10;
        
    }
    return ans;
}
    
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        
        vector<int> ans;
        for(int i=left; i< right; i++)
        {
            int insert = selfd(i);
            ans.push_back(insert);
        }
        return ans;
        
    }
};




int main()
{

    int num = 12;


    selfd(num);





    // int left = 0;
    // int right = 45;

    // vector<int> ans;


    

    // for (int i = left; i < right; i++)
    // {
        
    // }
    // cout<< endl;

    return 0;
}
