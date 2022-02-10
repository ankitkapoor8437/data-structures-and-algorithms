#include<iostream>
using namespace std;


int power(int n )
{
    // base case
    if (n==0)
    {
        /* code */
        return 1;
    }
    
    return 2  * power(n-1);
}

int main()
{

    int n = 4;
    int ans = power(n);
    cout<< ans << endl;
    return 0;
}
