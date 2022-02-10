#include<iostream>
using namespace std;

int signFunc(int num)
    {
        if(num==0)
        {
            return 0;
        }
        else if(num>0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }

int main()
{
    int nums[]={9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24};

        signed long long product=1;
        const signed int m = 1000000007;

        for(int i = 0 ; i < 13; i++)
        {
            product = ((product* nums[i])%m)%m; 
        }
        cout << product<<endl;
        cout << signFunc(product);
    


    return 0;
}
