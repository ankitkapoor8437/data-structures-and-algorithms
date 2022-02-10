#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    // ~Node
    // {
    //     int value = this data;

    //     if(this->next != NULL)
    //     {
    //         delete = next;
    //         next = NULL;
    //     }
    //     cout<< " memory is free for the Node :- " << value << endl;
    // }
};

void printNode(Node* &tail)
{
    Node* temp = tail;

    // empty list.
    if (tail==NULL)
    {
        cout<< "LIST IS EMPTY" << endl;
        return;
    }
    // if list has elements in it. 
    do
    {
        cout<< tail->data<< " ";
        tail = tail->next;

    } while (tail!=temp);

    cout<< endl;

    
}



int main()
{

    // Node* node1 = new Node(19);
    // node1->next = node1->prev = node1;
    // Node* tail = node1;

    
    Node* tail = NULL;
    printNode(tail);

    
    
    cout<< "CODE IS RUNNING PROPERLY" << endl;
    return 0;
}
