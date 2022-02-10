// #include<iostream>
// using namespace std;

// void print(int *p){
//     cout << p << endl;
//     cout << *p << endl;
// }



// int main()
// {

// // function with pointers

// int value = 5;

// int *p = &value;

// print(p);
// // print(*p);  wrong way to pass any pointer to the function 





// // integers with pointers

// // int arr[10]={2,3,4,5,6};

// //     cout<< arr<<endl;
// //     cout<< &arr[0]<<endl;
// //     cout<< *arr<<endl;
// //     cout<< *arr+1 <<endl;
// //     cout<< *(arr+2)<<endl;
// //     cout<< *(arr) +1 <<endl;    
// //     cout<< *arr<<endl;
// // int i = 3;

// //     cout<< i[arr]<<endl;
// //     cout<< *(i + arr)<<endl;

//     // int temp[10];
//     // cout<< sizeof(temp)<<endl;
//     // cout << sizeof(*temp)<< endl;
//     // cout<< sizeof(&temp)<< endl;

//     // int *ptr = &temp[0];
//     // cout<< sizeof(ptr)<<endl;
//     // cout<< sizeof(*ptr)<<endl;
//     // cout<< sizeof(&ptr) <<endl;


//     // int arr[20]={1,2,3,4};

//     // arr = arr + 1;

//     // cout<< arr<< endl;

//     // int *ptr = &arr[0];
//     // cout<< ptr<< endl;
//     // cout<< *ptr<< endl;
//     // ptr = ptr + 1;
//     // cout<< ptr<< endl;
//     // cout<< *ptr<< endl;

//     // cout<< &arr[0]<<endl;
//     // cout<< &arr<<endl;
//     // cout<< arr<<endl;

//     // int *p =&arr[0];

//     // cout<< *p<<endl;
//     // cout<< &p<<endl;
//     // cout<< p<<endl;


// //  charactrers with popinters

// // int arr[5]={1,2,3,4,5};
// // char ch[6]= "abcde";

// // cout<< arr<< endl;

// // cout<< ch<< endl;

// // char *c = &ch[0];
// // cout<< c<<endl;
// // cout<< *c<<endl;

// // char temp = 'a';
// // char *ptr = &temp;
// // cout<< *ptr<<endl;
// // cout<< ptr<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    char * ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    ptr += 2;
    cout << ptr;
    return 0;
}