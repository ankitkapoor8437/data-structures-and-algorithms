#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

void printS(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s[i];
    }
}


int main()
{
    string s = "God Ding";
    printS(s);

    string ans = " ";
    int count = 0;

    int start = 0;
    int end = s.length()-1;
      
    while(start<=end)
    {
        if(s[start]==' ' || start == s.size())
        {
            reverse(s.begin()+count,s.begin()+start);
            count = start + count;
        }

    }
    
    printS(s);
    // printS(ans);
    // cout<< count << endl;


    return 0;
}
