#include<iostream>
using namespace std;

int fib(int n)
{
    // dp[] for storing values of Fibonacci numbers
    int dp[n+1];
    // initialize zeroth and first element
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++)
    {
        // add previous two numbers to get the next term in series
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}


int main()
{
    int n = 6103;
   int result = 0;
    int num = n;
    for(int i = 0; i <= n+1; i++)
    {
        result = fib(i);
        if(n==result)
        {
			cout<< true;
        }
    }
    cout<< false;
    return 0;
}
