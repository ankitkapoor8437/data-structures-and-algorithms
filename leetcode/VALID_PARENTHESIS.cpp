#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string s = "()[]{}";

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        st.push(i);
    }
    
    cout<< st.top()<< endl;
    cout << st.size() << endl;


    int count = 0;
    while (!st.empty())
    {
        if (st.top()== ')' || st.top()== '}' || st.top()== ']')
        {
            st.pop();
            count++;
        }
        if (st.top()== '(' || st.top()== '{' || st.top()== '[')
        {
            st.pop();
            count--;
        }
    }
    
    if(count==0)
    {
        cout<< "true";
    }
    else{
        cout<< "false";
    }

    return 0;
}
