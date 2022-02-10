#include<iostream>
using namespace std;


char getmx(string s){

    int arr[26]={};

    for (int i = 0; i < s.length; i++)
    {
        /* code */

        char ch = s[i];

        int number = 0;
        //lowercase
        if (ch>='a'&& ch <='z')
        {
            number = ch - 'a';
        }
        else{ //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1;
    for (int i = 0; i < s.length ; i++)
    {
        /* code */
         
    }
    
}



int main()

{
    string s;


    return 0;
}
