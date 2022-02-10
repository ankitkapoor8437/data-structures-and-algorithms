#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructer
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<< " memeory free for node with data:- " << data << endl;
    }
    
};


// traverse the list
void print(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

// to get the length
int getLength(Node* &head)
{
    int len = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;

}

// insert at head
void insertHead(Node* &head, Node* &tail, int d)
{
    // empty list
    if (head==NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp->next = head;
        head ->prev = temp;
        head = temp;
    }
}

//insert at tail
void insertTail(Node* &head, Node* &tail, int d)
{
    if (tail==NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head =temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;
        temp-> prev = tail;
        tail = temp;
    }
}
// inser at any position
void insertPosition(Node* &head, Node* &tail, int position, int d)
{
    Node* temp = head;
    int count = 1;

     // inertion at first position
    if (position == 1)
    {
        insertHead(head, tail, d);
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
        insertTail(head, tail,d);
        return;
    }
    
    // creating a new node
    Node* nodeInsert = new Node(d);
    nodeInsert->next = temp->next;
    temp->next->prev = nodeInsert;
    temp->next = nodeInsert;
    nodeInsert->prev = temp; 
}


// deletion in list
void deletePosition(int position, Node* &head, Node* &tail)
{
    // deleting first node
    if (position == 1)
    {
        Node* temp = head;
        temp -> next-> prev = NULL;
        head = temp->next;
        temp ->next = NULL;
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
        
        // prev->next = current->next;
        // if (prev->next == NULL)
        // {
        //     tail = prev;
        // }
        // current ->next = NULL;
        // delete current;

        current->prev = NULL;
        prev->next = current->next;
        if (prev->next == NULL)
        {
            tail = prev;
        }
        current->next = NULL;
        delete current;

    }
    
}


 int main()
 {
    // Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    int l = getLength(head);
    cout<< l << endl;

    insertHead(head, tail, 11);
    print(head);

    insertTail(head, tail, 12);
    print(head);

    insertPosition(head, tail, 2, 8);
    print(head);

    insertPosition(head, tail, 1, 111);
    print(head);

    insertPosition(head, tail, 5, 200);
    print(head);


    deletePosition(1, head, tail);
    print(head);
    cout<< "head:- " << head->data << endl;
    cout<< "tail:- " << tail->data << endl;
    
    deletePosition(3, head, tail);
    print(head);
    cout<< "head:- " << head->data << endl;
    cout<< "tail:- " << tail->data << endl;

    deletePosition(3, head, tail);
    print(head);
    cout<< "head:- " << head->data << endl;
    cout<< "tail:- " << tail->data << endl;

    

     return 0;
 }
 