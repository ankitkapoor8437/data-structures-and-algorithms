#include<iostream>
#include<math.h>
using namespace std;


int bases(int n)
{
    int ans = 0;
    // int i = 0;
    while (n!=0)
    {
        int digit = n%10;
        ans =  ans + digit;
        // i++;
        n = n/10;
    }
    return ans;
}

void basec(int n ,int k)
{
    int ans = 0;
    int i = 0;
    while (n!=0)
    {
        int digit = n%6;
        ans = (pow(10,i)*digit) + ans;
        i++;
        n = n/6;
    }
    cout<< ans<< endl;
    cout<< bases(ans);
}





int main()
{
    int n = 10;
    int k = 10;

    basec(n , k);


    return 0;
}
