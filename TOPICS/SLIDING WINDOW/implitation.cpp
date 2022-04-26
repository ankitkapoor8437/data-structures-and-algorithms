#include<iostream>
using namespace std;

int main(
{
    int i=0;
    int j=0;
    int sum=0
    /// k is target value
    int k = 45; 
    int n = 6;

    while (j<n)
    {
        ///expantion through j by increasing it
        sum = sum + arr[j];
        j++;

        ///contraction through i by increasing it
        while (sum>k && i<j)
        {
            sum = sum - arr[i];
            i++;
        }
        ///if answer found return the values of index i and j-1
        if(sum == k)
            cout<< i << " " << j-1; 
    }

    return 0;
}
