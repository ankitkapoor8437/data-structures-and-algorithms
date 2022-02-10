#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;

    }

    ~Node()
    {
        int value = this->data;
        if (this-> next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<< "memoery is free for the node:- " << value << endl;
    }
};

// insertion in CLL.
void insert(Node* &tail, int element, int d)
{

    if (tail==NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* current = tail;
        while (current->data != element)
        {
            current = current->next;
        }
        
        Node* temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

// deletion in CLL
void deleteNode(Node* &tail, int value)
{
    if (tail==NULL)
    {
        cout<< "list is empty" << endl;
        return;
    }
    else
    {
        Node* prev = tail;
        Node* current = prev->next;
        
        while (current -> data != value)
        {
            prev = current;
            current = current -> next;
        }

        prev->next = current->next;
        if (tail == current)
        {
             tail = prev;
        }
    
        // one node linked list
        if (current == prev)
        {
            tail = NULL;
        }

        current->next = NULL;
        delete current;
        
    }
    

}


// traversal off CLL.
void print(Node* &tail)
{
    Node* temp = tail;
    // if empty
    if (tail==NULL)
    {
        cout<< "list is empty" << endl ;
        return;
    }
    do
    {
        cout<< tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    
    cout << endl;
}


int main()
{
    // Node* node1 = new Node(10);
    // node1->next = node1;

    // Node* tail = node1;

    Node* tail = NULL;
    print(tail);
    
    insert(tail, 1, 10);
    print(tail);

    insert(tail, 10, 5);
    print(tail);

    
    insert(tail, 5, 6);
    print(tail);

    insert(tail, 6, 16);
    print(tail);
    
    insert(tail, 16, 70);
    print(tail);

    // insert(tail, 70, 4);
    // print(tail);


    deleteNode(tail, 10);
    print(tail);


    return 0;
}
