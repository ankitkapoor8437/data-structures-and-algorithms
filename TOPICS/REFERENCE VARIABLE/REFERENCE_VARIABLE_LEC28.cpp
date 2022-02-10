#include<iostream>
using namespace std;

void update2(int &n)
{
    n++;
}


void update1(int n)
{
    n++;
}
int main()
{
    // int i = 5;

    // int &j = i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

int n = 5;
cout<< n<<endl;

update1(n);
cout<< n << endl;

update2(n);
cout<< n<< endl;



    return 0;
}
