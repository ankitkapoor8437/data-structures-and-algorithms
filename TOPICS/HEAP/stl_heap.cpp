#include<iostream>
#include<queue>
using namespace std;


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if (left<=n && arr[largest]< arr[left])
    {
        largest=left;
    }
    if (right<=n && arr[largest]< arr[right])
    {
        largest=right;
    }
    
    if (largest!=i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, i);
    }
}

void heapsort(int arr[], int n)
{
    int size = n;
    
    while (size>1)
    {
        //step 1
        swap(arr[size], arr[1]);
        // step2
        size--;
        // step 3
        heapify(arr,size,1);
    }
}


int main()
{
    int arr[6] = {-1, 54,53,55,52,50};
    int n = 5;

    //heap creation
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr,n,i);
    }


    for (int i = 1; i <= n; i++)
    {
        cout<< arr[i] << ' ';
    }
    cout<< endl;

    //heap sort
    heapsort(arr, n );

    for (int i = 1; i <= n; i++)
    {
        cout<< arr[i] << ' ';
    }
    cout<< endl;
    
    cout<< "using priority queue" << endl;

    //max heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<< pq.top() << endl;
    pq.pop(); 
    cout<< pq.top() << endl;
    cout<< pq.size() << endl;

    //min heap
    priority_queue<int, vector<int>, greater<int>> minheap;

    
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<< minheap.top() << endl;
    minheap.pop(); 
    cout<< minheap.top() << endl;
    cout<< minheap.size() << endl;
    return 0;
}
