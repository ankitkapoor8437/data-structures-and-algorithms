#include<iostream>
#include<algorithm>
using namespace std;

int xormethod(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {   
        ans = ans^arr[i];
    }
    for (int i = 1; i < size-1; i++)
    {
        ans = ans ^ i;
    }
    
    return ans;
}


void printa(int arr[], int n){
     for (int i = 0; i < n; i++)
        {
            cout<< arr[i]<<endl;
      }
}   


int main()
{
    int test[8]={4,3,2,7,8,2,,1};
    // printa(test,8);
    cout<< xormethod(test,8)<< endl;
    return 0;
}
