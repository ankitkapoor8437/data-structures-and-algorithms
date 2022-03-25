#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    stack<int> s;

    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    cout<< q.front()<< endl;
    cout<< q.back()<< endl;

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
        cout<< endl;
        cout<< q.front()<< endl;
        cout<< q.back()<< endl;
        cout<< endl;
        cout<< s.top()<< endl;
    }
    
    cout<< endl;
    cout<< q.size()<< endl;

    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
        // cout<< endl;
        // cout<< q.front()<< endl;
        // cout<< q.back()<< endl;
        // cout<< endl;
        // cout<< s.top()<< endl;
    }

    cout<< endl;
    cout<< q.front()<< endl;
    cout<< q.back()<< endl;
    





    return 0;
}
