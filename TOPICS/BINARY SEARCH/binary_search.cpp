#include<iostream>
using namespace std;

int binarys(int arr[], int size, int key ){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while (start<=end)
    {     if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            // go in the right
            start  = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = (start + ((end-start)/2));
        
    }
    return -1;
}


int main(  )
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3, 8, 11,14,16}; 

    int evenindex = binarys(even, 6 ,12);
    cout << evenindex << endl;

    int oddindex =binarys(odd, 5, 16);
    cout  << oddindex<<endl;

    return 0;
}
