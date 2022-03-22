class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
        
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // if the queue is full.
        if((front==0 && rear == size-1) || ( rear == (front-1)%(size-1)))
        {
//             cout<< "queue is full" << endl;
            return false;
        }
//         to insert the single element
        else if(front == -1)
        {
            front = rear = 0;
//             arr[rear] = value;
        }
//         to maintain the cyclic flow
        else if(rear == size-1 && front!=0 )
        {
            rear = 0;
//             arr[rear] = value;
        }
        else
        {
            //normal case
			rear++;
//             arr[rear] = value;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // to check the queue is empty.
        if(front == -1)
        {
			return -1;
        }
//         singe element is present
        int ans = arr[front];
        arr[front]  = -1;
        if(front == rear)
        {
			front = rear  = -1;
        }
        else if(front == size-1)
        {
//             to maintain the cyclic nature
            front = 0;
        }
        else
        {
//             for normal case
            front++;
        }
        return ans;
    }
};