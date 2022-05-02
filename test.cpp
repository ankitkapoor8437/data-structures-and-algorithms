#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(9);
    arr.push_back(27);
    arr.push_back(2);
    arr.push_back(13);
    arr.push_back(25);
    arr.push_back(2);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
    
    // sort(arr.begin(), arr.end());


    for (int i = 0; i < arr.size()-1;)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
            i = -1;
        }
        i++;
    }

        
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;

    int i = arr.size()-1;

    cout<< arr[arr.size()-2];
    
    
    

    return 0;
}

