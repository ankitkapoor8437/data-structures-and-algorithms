#include<iostream>
using namespace std;

int bubble(int arr[], int n){   
    // Write your code here.
    for (int i = 1; i < n ; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i ; j++)
        { 
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }   
        }  
        if (swapped==false){
            break;
        }
        	
    }
}


int main(  )
{
    int even[6]={2,4,6,8,12,18};
    bubble(e)


    return 0;
}
