#include<iostream>
using namespace std;

class heap
{

public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        int size = 0;
    }

    void insertion(int val)
    {
        size = size +1;
        int index = size;
        arr[index] = val;

        while (index>1)
        {
            int parent = index/2;

            if (arr[parent]< arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout<< arr[i] << " ";
        }
        cout << endl;
    }


    void deleteFromHeap()
    {
        if (size==0)
        {
            return;
        }

        // step 1
        arr[1] = arr[size];
        size--;

        //step 2
        // take the node to correct position

        int i = 1;
        while (i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;

            if (leftIndex<size && arr[i]< arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex<size && arr[i]< arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
                {
                    return;
                    }
    
            
        }
    }
    
};

int main()
{
    heap h;
    h.insertion(50);
    h.insertion(45);
    h.insertion(30);
    h.insertion(25);

    h.print();

    h.deleteFromHeap();
    h.print();
    
    return 0;
}
