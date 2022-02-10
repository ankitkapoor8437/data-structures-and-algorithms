#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char test[5] = {"IDID"};

    vector<int> result;
    // int j = 4;
    int counti = 0;
    int countd = 4;
    for (int i = 0; i <=5; i++)
    {   
        
        if (test[i]=='I')
            {
                result.push_back(counti);
                counti++;
            }
        else if (test[i]=='D')
        {
            result.push_back(countd);
            countd--;
        }
        
        
    }
    result.push_back(counti);



    for(int i = 0; i < 5 ; i++)
    {
        cout<< test[i]<<" ";
    }
    cout<<endl;
    
    for (int i = 0; i < result.size(); i++)
    {
        cout<< result[i];
    }
    
    return 0;
}
