#include<iostream>
#include<climits>
using namespace std;

// ispresent
bool ispresent(int arr[][4], int target, int i , int j ){
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j]== target)
            {
                return 1;            }
        }
    }
return 0;

}

// to print rowise sum
void sum(int arr[][4], int i , int j ){
        for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
                sum = sum + arr[i][j];
        }
     cout<< sum<< " ";
    }
       cout << endl;
}

// to print colise sum
void sumc(int arr[][4], int i , int j ){
        for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
                sum = sum + arr[i][j];
        }
     cout<< sum<< " ";
    }
       cout << endl;
}

int largestrs(int arr[][3], int i, int j ){
    int maxi = INT_MIN;
    int rowindex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
                sum = sum + arr[i][j];
        }
        if (sum> maxi)
        {
            maxi = sum;
            rowindex = i;
        }
        
    }
    cout << maxi<< endl;
    return rowindex;
}

int main()
{
    /* code */
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>> arr[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<< endl;
    }

    // sum(arr, 3, 3);
    // sumc(arr, 3, 3);
    int ansindex = largestrs(arr, 3, 3);
    cout<< ansindex;


    // int target;
    // cin>> target;

    // if (ispresent(arr, target, 3,4))
    // {
    //     cout<< "found";
    // }
    // else{
    //     cout<< "not found";
    // }
    return 0;
}
