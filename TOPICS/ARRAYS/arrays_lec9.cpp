// #include<iostream>
// using namespace std;

// int main()
// {
//     /* code */
//     // declaration of an array
//     int number[15];

//     cout<< number[0]  << endl; 

//     int second[3]={5,7,11};
//     cout<< second[0] << endl; 
     

//     cout<< endl<< "fine" << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a; 
//     int b;
//     int c;
//     cout<<"enter the number:- "<< endl;
//     cin>> a;
//     cout<< " enter the second number :-" << endl;
//     cin>> b;
//     // c = a+b;9
    
//     cout<<"sum of a and ab is:" << a+b;


//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     string a;
//     string b; 
//     // int b;
//     // int c;
//     cout<<"enter your name:- "<< endl;
//     getline(cin, a);
//     // cin>> b;
    
//     cout<<"your name is :- " << a ;


//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cin>> num;

//     if(num%2==0){
//             cout<<"number is even";

//     }
//     else{
//          cout<<"number is odd";

//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int a;
//     int b;
//     char c;

//     cin>> a;
//     cin>> b;
//     cin>> c;

//     switch(c){
//         case '+':
//             cout<< a + b;
//             break;
//         case '-':
//             cout<< a - b;
//             break;

//         case '*':
//             cout<< a * b ;
//             break;

//         case '/':
//             cout << a/b;
//             break;
            
//         default:
//             break;
//     }
//     return 0;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 2;
//     int ans=1;
//     for (int i = 0; i <= 10; i++)
//     {
//         ans = 2 * i;
//          cout<< ans<< endl;
//     }
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 2;
//     int ans = 1;
//     int i = 0;
//     while (i<=10)
//     {
//         ans = 2 * i;
//         cout<< ans<< endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int num[10];
//     for (int i = 0; i < 10; i++)
//     {
//         cin>> num[i];
     
//     }

//     for (int i = 0; i < 10; i++)
//     {
//            cout<< num[i] <<endl;
//     }
    
//     // cout<< num <<endl;
    
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int ran[10]={2};
//     int max = ran[0];
//     for (int i = 0; i < 10; i++)
//     {
//         if (max<=ran[i])
//         {
//             max = ran[i];
//         }
//     }
//     cout<< max;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int n = 4;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){

//     int n = 4;
//     int ans1 = 0;

//     while (n!=0)
//     {
//         // int i = 0;
//         int digit = n % 2;
//         ans1 = (10 * ans1) + digit;
//         // i++;
//         n = n/2;
//     }
//     cout<<ans1<<endl;

//     int m = 5;
//     int ans2 = 0;
//     while (n!=0)
//     {
//         // int i = 0;
//         int digit = m % 2;
//         ans2 = (10 * ans2) + digit;
//         // i++;
//         m = m/2;
//     }
//     cout<<ans2<<endl;

// }

// #include<iostream>
// using namespace std;

// void printarray(int arr[], int size){

//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<<" ";
//     }
//     cout<< endl;
// }

// int main()
// {
//     int test[]={2,3,4,5,6,7};
//     int n = 10;
//     printarray(test,10);

//     int test1[]={34,56,6767};
//     int n1 = 5;
//     printarray(test1,5);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void printarray(char arr[], int size){

//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<<" ";
//     }
//     cout<< endl;
// }

// int main()
// {
//     char ch[]={'a','s','d','f','g'};
//     int n = 5;
//     printarray(ch,n);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void printarray(char arr[], int size){

//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<<" ";
//     }
//     cout<< endl;
// }

// int main()
// {
//     char ch[10]={'a','s','d','f','g'};
//     // int n = 5;
//     printarray(ch,5);
//     return 0;
// }



// #include<iostream>
// using namespace std;

// void inputArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin>> arr[i];
//     }

    //  for (int i = 0; i < size; i++)
    // {
    //     cout<< arr[i]<<" ";
    // }
    
//     // cout<< arr[10];
    
// }

// int main()
// {
//     int put[10];
//     // int n = 10;
//     inputArray(put, 10);
//     return 0;
// }



// #include<iostream>
// using namespace std;

// void inputArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin>> arr[i];
//     }
//     // cout<< arr[10];    
// }

// void outputArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<<" ";
//     }
    
    
// }

// int main()
// {
//     int put[10];
//     // int n = 10;
//     inputArray(put, 10);
//     outputArray(put,10);
//     return 0;
// }



// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;

// int getmax(int arr[], int n)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     return max; 
// }

// int getmin(int arr[], int n)
// {
//     int min = INT8_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]<min)
//         {
//             min = arr[i];
//         }
//     }
//     return min; 
// }

// int main()
// {
//     int size;
//     cin>> size;

//     int list[100];

//     for (int i = 0; i < size; i++)
//     {
//         cin>> list[i];
//     }

//     cout<<"MAX is"<< getmax(list, size)<<endl;
//     cout<<"MIN is"<< getmin(list, size)<<endl;

//     return 0;
// }


// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;

// int getmax(int arr[], int n)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     return max; 
// }

// int getmin(int arr[], int n)
// {
//     int min = INT8_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]<min)
//         {
//             min = arr[i];
//         }
//     }
//     return min; 
// }

// int main()
// {
//     int size;
//     cin>> size;

//     int list[100];

//     for (int i = 0; i < size; i++)
//     {
//         cin>> list[i];
//     }

//     cout<<"MAX is"<< getmax(list, size)<<endl;
//     cout<<"MIN is"<< getmin(list, size)<<endl;

//     return 0;
// }


// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;

// int main()
// {
//     int n = 6;
//     // cin>> size;

//     int list[100]={2,3,4,5,6,7};

//     for (int j = 0; j< n; j++)
//     {
//         cout<< list[j]<<" "<< endl;
//     }

//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans + list[i];
//     }
//     cout << ans ;



//     return 0;
// }

// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==key){
//             return 1;
//         }

//     }
//     return 0;
// }

// int main()
// {
//     // int n = 6;
//     // cin>> size;

//     int arr[10]={5,7,-2,10,22,-2,0,22,1};

//     int key;
//     cin>> key;

//     bool found = search(arr,10,key);

//     if(found){
//         cout<< " key is present";
//     }
//     else{
//         cout<<"key is not present";
//     }

//     return 0;
// }


// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;

// void parr(int nums[], int size){

//     int ans[6];
//     for (int i = 0; i < size; i++)
//     {
//         ans[i] = nums[nums[i]];
//     }

//     for (int j = 0; j < size; j++)
//     {
//        cout<< ans[j]<< " ";
//     }
    

// }

//// build an array usin permutaion
// int main()
// {
//     // int n = 6;
//     // cin>> size;

//     int nums[6]={0,2,1,5,3,4};
   

//     parr(nums,6);

//     return 0;
// }

// reverse array

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size){
    
//     int start = 0;
//     int end = size - 1;
//     while (start<=end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
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
//     int arr[6]={2,7,8,9,45,6};
//     int arr2[5]={2,4,3,5,6};

//     reverse(arr,6);
//     reverse(arr2,5);

//     printarray(arr, 6);
//     printarray(arr2,5);


//     return 0;
// }
