/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head==NULL || head-> next == NULL)
    {
        return head;
    }
    
    Node* prev = NULL;
    Node* current = head;
    Node* forward = NULL
    
    while(current != NULL )
    {
        forward = current -> next;
        current -> next = prev;
        prev = current;
        current = forward;
    }
    
    return prev;
}
