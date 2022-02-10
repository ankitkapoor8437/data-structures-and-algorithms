#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //constructer
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node()
    {
        int value = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<< " memory is free for node with data" << value << endl;

    }
};

//insertion At head
void insertHead(Node* &head, int d)
{
    // new node create
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

// insert At tail
void insertTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// insert at any position
void insertPosition(Node* &head, Node* &tail, int position, int d)
{
    Node* temp = head;
    int count = 1;

    // inertion at first position
    if (position == 1)
    {
        insertHead(head, d);
        return;
    }
    
    // at any given position
    while (count< position-1)
    {
        temp = temp -> next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertTail(tail,d);
        return;
    }
    

    // creating new node for d
    Node* Nodetoinsert = new Node(d);
    Nodetoinsert-> next = temp ->next;
    temp->next = Nodetoinsert;
    
}

// deletion in list
void deletePosition(int position, Node* &head, Node* &tail)
{
    // deleting first node
    if (position == 1)
    {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node* current = head;
        Node* prev = NULL;

        int count = 1;

        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }
        
        prev->next = current->next;
        if (prev->next == NULL)
        {
            tail = prev;
        }
        current ->next = NULL;
        delete current;
    }
    
}


//traversing a linklist

void print(Node* &head)
{
    Node* temp = head;
    while ( temp!= NULL)
    {
        cout<< temp->data << " ";
        temp = temp-> next;
    }
    cout<< endl;
    
}

int main()
{
    Node* node1 = new Node(10);

    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1; 
    print(head);

    insertTail(tail, 15);
    print(head);

    insertHead(head, 12);
    print(head);

    insertPosition(head,tail,4,22);
    print(head);

    deletePosition(5 ,head, tail);
    print(head);


    cout<< "head :- " << head->data << endl;
    cout<< "tail :- " << tail->data  <<endl;


    return 0;
}
