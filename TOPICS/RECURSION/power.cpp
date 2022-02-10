#include<iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b==0)
    {
        return 1;
    }
    if (b==1)
    {
        return a;
    }
    // recursive call

    int ans = power(a, b/2);

    if (b%2==0)
    {   
        // even
        return ans*ans;
    }
    else
    {
        // odd
        return a*ans*ans;
    }
    
    
    
}



int main()
{
    int a = 3;
    int b = 2;

    int ans = power(a, b);

    cout<< ans;

    return 0;
}
