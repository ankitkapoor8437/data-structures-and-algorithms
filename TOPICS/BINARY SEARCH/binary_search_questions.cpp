#include<iostream>
using namespace std;


// first occurence 
int firsto(int arr[], int n, int key){
    int s =0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {  //right mai jana hai
            s = mid + 1;
        }
        else if (key< arr[mid])
        { // left mai jana hai 
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

// last occurence
int lasto(int arr[], int n, int key){
    int s =0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {  //right mai jana hai
            s = mid + 1;
        }
        else if (key< arr[mid])
        { // left mai jana hai 
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



int main()
{
    int even[5]= {1,2,3,3,5};

    cout<< firsto(even, 5 ,3)<<endl;
    cout<< lasto(even, 5 ,3)<<endl;
    return 0;
}
