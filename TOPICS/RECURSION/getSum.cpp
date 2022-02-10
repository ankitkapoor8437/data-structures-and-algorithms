#include<iostream>
using namespace std;

int getSum(int *arr, int size)
{
    //base case
    if (size==0)
    {
        /* code */
        return 0;
    }
    if (size==1)
    {
        return arr[0];
    }
    else
    {
        int remainingPart = getSum(arr+1, size-1);
        cout<< remainingPart<<endl;
        int sum = arr[0] + remainingPart;
        // cout<< sum << endl;
        return sum;
    }
}

int main()
{
    int arr[]={2,3,4,5,6};

    int size = 5;

    int ans = getSum(arr, size);

    cout<< "sum is :- "<< ans<< endl;

    return 0;
}
