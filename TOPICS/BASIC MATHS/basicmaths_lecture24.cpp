#include<iostream>
using namespace std;

unsigned long long int fact(int n){

    unsigned long long ans = 1;
    const unsigned long long int m = 10000000007; 
    while (n!=0)
    {
        ans = (ans * n)%m;
        n--;
    }
    return ans;

}


int main()
{
    int n = 212;

    cout << fact(n);
    return 0;
}
