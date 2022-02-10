#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// int main()
// {
//     int check = 1;

//     int num = 2;

//     while (num<check)
//     {
//         if (check%num==0)
//         {
//             cout<< "not prime";
//             break;
//         }
//         else
//         {
//             num++;
//         }
//         cout<< "prime";
//         break;
//     }
    


//     return 0;
// }


int main()
{
    vector<int> binary;
    int num = 10;

    int ans = 0;
    int i=0;
    while(num!=0)
    {
        int digit = num%2;
        ans = ((ans*10)+digit);
        // binary.push_back(ans);
        i++;
        num = num/2;
	}
    // cout<< ans;
    binary.push_back(ans);

    for (int i = 0; i < binary.size(); i++)
    {
        cout<< binary[i];
    }
    


    return 0;
}
