#include<iostream>
using namespace std;


void sortArray(int *arr, int size)
{
    // base case
    if (size==0||size==1)
    {
        /* code */
        return;
    }

    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr, size-1);
    
    
}

int main()
{
    int array[] = {2,4,3,5,67,86};

    int n = 6;    

    sortArray(array, n);

    for (int i = 0; i < n; i++)
    {
        cout<< array[i]<< " ";
    }
    
    return 0;
}
