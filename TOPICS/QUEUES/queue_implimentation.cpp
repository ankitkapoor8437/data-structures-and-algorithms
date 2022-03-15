#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // creating a queue
    queue<int> q;

    // pushing some elements
    q.push(2);
    q.push(274);
    q.push(28);
    q.push(8);

    cout<< q.size()<< endl;

    q.pop();
    cout<< q.size()<< endl;
    q.pop();
    cout<< q.size()<< endl;
    q.pop();
    cout<< q.size()<< endl;
    q.pop();
    cout<< q.size()<< endl;

    if (q.empty())
    {
        cout<< "queue is empty"<< endl;
    }
    else
    {
        cout<< "queue is not empty" << endl;
    }
    

    return 0;
}
