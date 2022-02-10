#include<iostream>
using namespace std;

int sum(int n){
    int ans = 0;
    for(int i = 0 ; i <= n ; i++)
    {
        ans = ans + i;
    }
    return ans;
}

int product(int n){
    int ans = 1;
    for(int i = 1 ; i <=n ; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    /* code */
    int n =4;
    int q = 2;
        // Write your code here.
    if (q==1){
        cout<< sum(n);
    }
    else if (q==2)
    {
        cout<< product(n);
    }
        return 0;
}



