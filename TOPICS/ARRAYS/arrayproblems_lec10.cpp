// swap alternate elements

// #include<iostream>
// using namespace std;

// void swaparray( int arr[], int size){

//     int start = 0;
//     int end = 1;
//     while (start<=size)
//     {
//         swap(arr[start],arr[end]);
//         start += 2;
//         end  += 2;
//     }
 
// }

// void printarray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<< " ";
//     }
//     cout<< endl;
// }

// int main()
// {
//     int test[6]={1,2,3,4,5,6};
//     int test1[5]={1,3,2,4,56};

//     // swaparray(test,6);
//     swaparray(test1,5);
//     // printarray(test,6);
//     printarray(test1,5);
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void swapAlternate( int arr[], int size){
//     for (int i = 0; i < size; i+=2)
//     {
//         if(i+1<size)
//         {
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// void printarray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<< " ";
//     }
//     cout<< endl;
// }

// int main()
// {
//     int testeven[6]={1,2,3,4,5,6};
//     int testodd[5]={2,3,42,3,4};

//     swapAlternate(testeven,6);
//     swapAlternate(testodd,5);

//     printarray(testeven,6);
//     printarray(testodd,5);
//     return 0;
// }


// code studio questions
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.
//     vector<int> ans;
//     for(int i = 0; i < n; i++)
//     {
//         int element = arr1[i];
//         for(int j = 0; j < m ; j++)
//         {	
//             if(element< arr2[j])
//                 break;
//             if (element==arr2[j])
//             {
//                 ans.push_back(element);
//                 arr2[j] = -11;
//                 break;
//             }
//         }
//     }
//     return ans;
// }



// #include<iostream>
// using namespace std;

// void sortone(int arr[], int size)
// {
//     int left = 0, right= size-1;
//     while (left< right)
//     {
//         while (arr[left]==0 && left<right)
//         {
//             /* code */
//             left++;
//         }
        
//         while (arr[right]==1 && left<right)
//         {
//             right--;
//         }
//         if (left<right)
//         {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//         }
//     }
// }


// void printarray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<< " ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[8]={1,1,0,0,0,0,1,0};

//     sortone(arr,8);

//     printarray(arr, 8);
//     return 0;
// }



#include<iostream>
using namespace std;

void sortarr(int arr[], int n){
    int ans[]
}

void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = {1,2,2,1,1,3};

    sortarr(arr, 6);
    printarray(arr, 6);
    return 0;
}
