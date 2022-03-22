class Deque
{
    
    int * arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
//         if queue is full
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            front = rear = 0;
        }
        else if(front == 0 && rear!= size-1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        
        return true; 
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
       if(isFull())
        {
//             cout<< "queue is full" << endl;
            return false;
        }
//         to insert the single element
        else if(isEmpty())
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
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
         if(isEmpty())
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

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
         if(isEmpty())
        {
			return -1;
        }
//         singe element is present
        int ans = arr[rear];
        arr[rear]  = -1;
        if(front == rear)
        {
			front = rear  = -1;
        }
        else if(rear == 0)
        {
//             to maintain the cyclic nature
            rear = size-1;
        }
        else
        {
//             for normal case
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
			return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
         if(isEmpty())
        {
            return -1;
        }
        else
        {
			return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front==0 && rear == size-1) || ( front!=0 && rear == (front-1)%(size-1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};