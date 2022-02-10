#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{
    //base case
    if(s>e)
    {
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    if (arr[mid]<k)
    {
        return binarySearch(arr, mid+1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid-1,k);
    }
}

int main()
{
    int arr[]={2,4,6,10,14,16};

    int size = 5;
    int key = 6;

    bool ans = binarySearch(arr, 0, 5, key);

    if (ans)
    {
        /* code */
        cout<< "PRESENT";
    }
    else
    {
        cout<< "NOT PRESENT";
    }
    return 0;
}
