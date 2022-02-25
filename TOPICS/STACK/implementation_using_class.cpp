#include<iostream>
using namespace std;

class stack
{
    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviours
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size-top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<< "stack overflow"<< endl;
        }

    }

    void pop()
    {
        if (top>=0)
        {
            top--;
        }
        else
        {
            cout<< "stack is underflow" << endl;
        }

    }

    int peek()
    {

        if (top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<< " stack is empty " << endl;
            return -1;
        }
        
    }

    bool isEmpty()
    {
        if (top==-1)
        {
            return true;
        }
        else
        {
            return false;    
        }
    }



};

int main()
{
    stack s(5);

    s.push(1);
    s.push(5);
    s.push(4);
    s.push(56);

    cout<< s.peek() << endl;

    s.pop();
    cout<< s.peek() << endl;
    s.pop();
    cout<< s.peek() << endl;
    s.pop();
    cout<< s.peek() << endl;
      s.pop();
    cout<< s.peek() << endl;

    if (s.isEmpty())
    {
        cout<< " stack is empty" << endl;
    }
    else
    {
        cout<< "stack is  not empty " << endl;
    }

    return 0;
}
