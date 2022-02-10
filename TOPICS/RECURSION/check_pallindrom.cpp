#include<iostream>
using namespace std;

bool checkp(string str,int i, int j )
{
    // base case
    if (i>j)
    {
        return true;
    }
    if (str[i]!=str[j])
    {
        return false;
    }
    else
    {
        // recursive call
        return checkp(str, i+1, j-1);
    }
    
}

int main()
{
    string name = "abba";

    int ans = checkp(name, 0 , name.length()-1);

    if (ans)
    {
        cout<< " IS PALLINDROME";
    }
    else
    {
        cout<< "NOT PALLINDROME";
    }
    
    return 0;
}
