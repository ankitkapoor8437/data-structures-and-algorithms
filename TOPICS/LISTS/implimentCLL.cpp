#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    // constructer
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};


void insertNode(Node* &tail, int element, int d)
{
    // empty node
    if (tail==NULL)
    {
        Node* newNode = new Node(d);
        newNode->next = newNode;
        tail = newNode;
    }
    else
    {
        // non empty list
        Node* current = tail;

        while (current->data!= element)
        {
            current = current -> next; 
        }
        
        // element is found and current is at the element 
        Node* temp = new Node(d);

        temp->next = current->next; 
        current->next = temp;
    }
    
}

void printNode(Node* &tail)
{
    Node* temp = tail;

    // empty list
    if (tail==NULL)
    {
        cout<< " list is empty" << endl;
        return;
    }
    do
    {
        cout<< tail->data<< " ";
        tail = tail->next;
    } 
    while (tail != temp);

    cout<< endl;
}

void deleteNode(Node* tail, int value)
{
    // empty list
    if (tail==NULL)
    {
        cout<< "list is empty" << endl;
        return;
    }
    else
    {
        // assuming value is present
        Node* prev = tail;
        Node* current = prev->next;

        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;

        if (current == prev)
        {
            tail == NULL;
        }
        
        if (tail == current)
        {
            tail = prev;
        }

        current->next = NULL;
        delete current;
    }
    
}




int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    printNode(tail);

    insertNode(tail, 3, 112);
    printNode(tail);

    insertNode(tail, 112, 400);
    printNode(tail);

    deleteNode(tail, 3);
    printNode(tail);


    return 0;
}
