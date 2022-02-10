#include<iostream>
#include<vector>
using namespace std;

int fib(int n)
{
    // base case
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    // rr
    return fib(n-1) + fib(n-2);   
}


int main()
{   
    int  n = 3;
    int result = 0;
    int num = n;
    while (num=!0)
    {
        result = fib(num);
        if(n==result)
        {
			cout<< "yes"<< endl;
        }
        num--;
    }
    
    cout<< "no" << endl;

    return 0;
}
