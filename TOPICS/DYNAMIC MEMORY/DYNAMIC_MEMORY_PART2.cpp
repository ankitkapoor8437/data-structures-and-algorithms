#include<iostream>
using namespace std;

int main()
{
//     int n ;
//     cin>> n;

//     int ** arr = new int*[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     }
    

// // for taking input
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>> arr[i][j];
//         }
        
//     }
    

// // for taking output
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<< arr[i][j];
//         }
//         cout<< endl;
//     }


    int n ;
    cin>> n;

    int m ;
    cin>> m;


    int ** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    

// for taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>> arr[i][j];
        }
        
    }
    

// for taking output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j];
        }
        cout<< endl;
    }
//  releasing memory
    for (int i = 0; i < n; i++)
    {
        delete []arr[i];
    }

    delete []arr;

    return 0;
}
