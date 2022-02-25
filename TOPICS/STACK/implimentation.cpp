#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // creation
    stack <int> s;

    // push
    s.push(2);
    s.push(3);
    s.push(4);

    // pop
    s.pop();
    s.pop();

    cout<< "printing the top" << s.top()  << endl;

    if (s.empty())
    {
        cout<< "stact is empty" << endl;
    }
    else
    {
        cout<< " not empty" << endl;
    }

    //size
    
    cout<< s.size()<< endl;

    
    return 0;
}
