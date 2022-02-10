#include<iostream>
using namespace std;

bool search(int *arr, int size, int k)
{
    //base case
    if(size==0)
    {
        return false;
    }
    if(arr[0]==k)
    {
        return true;
    }
    else
    {
        bool remainingPart = search(arr+1, size-1, k);
        return remainingPart; 
    }
}

int main()
{
    int arr[]={2,3,4,5,6};

    int size = 5;
    int key = 6;

    bool ans = search(arr, size, key);

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
