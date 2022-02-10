#include<iostream>
using namespace std;

void merge(int *arr, int s ,int e)
{
    int mid = s + (e-s)/2;


    // lenght of two merging arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // declaration of two merginf arrays in dynamic memory

    int* first = new int[len1];
    int* second = new int[len2];

    // copying values
    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted arrays

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1<len1 && index2<len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
        
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s>=e)
    {
        return;
    }

    int mid = s +(e-s)/2;

    // to solve left part
    mergeSort(arr,s , mid);

    // to solve right part
    mergeSort(arr, mid+1, e);

    // now merge the arrays
    merge(arr, s, e); 
}

int main()
{
    int array[] = {2,8,3,7,4,6,5};

    int n = 7;

    mergeSort(array, 0, n-1);

    for (int i = 0; i < n-1; i++)
    {
        cout<< array[i]<< " ";

    }
    cout<< endl;
    return 0;
}
