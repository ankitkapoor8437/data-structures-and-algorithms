#include<iostream>
#include<algorithm>
using  namespace std;

void  print(int arr[], int n){
    for (int i = 0; i < n ; i++)
    {
        /* code */
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}

int find(int arr[], int n){
    print(arr, n);
    int ans = 0;
    // int i = 0;
    for (int i=0 ; i < n; i++)
    {
        int first = i;
        int second = i + 1;
    
        if ((arr[first]^arr[second])==0){
            ans = arr[first];
            // cout<< ans<<endl;
            break;
        }
 

    }
     return ans;
}

// int findw(int arr[], int n){
//     int ans = 0;
//     int f = 0;
//     int s = 1;
//     while (f<=n)
//     {
//         if (arr[f]^arr[s]==0){
//             ans = arr[f];
//             // f++;
//             // s++;
//         }
//         else{
//             f++;
//             s++;
//         }
//     }
//     return ans;
// }



int main()
{
    /* code */
    int arr[7]={2, 2, 2, 5, 4, 6, 1};

    sort(arr, arr+7);
    print(arr, 7);
    int result = find(arr, 7);
    cout << result<< endl;

    // int resultw = findw(arr, 10);
    // cout << resultw<< endl;

    return 0;
}
