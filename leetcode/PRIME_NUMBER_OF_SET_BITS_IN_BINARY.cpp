// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;

//  void count1(vector<int> binary)
//     {
//         vector<int> counter;

//         for (int i = 0; i < binary.size(); i++)
//         {
//             int num = binary[i];
//             int count = 0;
//             while (num!=0)
//             {
//                 int digit= num%10;
//                 if (digit==1)
//                 {
//                     count++;
//                 }
//                 num=num/10;

//             }
//             counter.push_back(count);
//         }

//         int prime = 0;
//         for (int i = 0; i < counter.size(); i++)
//         {   
//             int check = counter[i];
//             int num = 2;
//             if (check==2)
//             {
//                 prime++;
//             }
//             else{
//             while (num<check)
//             {   
//                 if (check%num==0)
//                 {
//                     // cout<< "not prime";
//                     break;
//                 }
//                 else
//                 {
//                     num++;
//                 }
//                 prime++;
//                 break;
//             }
//          }
//         }

//         cout<<prime<<endl;
//     }

// int main()
// {
//     vector<int> binary;
        
//         int l = 6;
//         int r = 511;
        
//         for(int i = l; i<=r; i++)
//        {
//         long ans = 0;
//         int num = i;
//         while(num>0)
//         {
//             int digit = num%2;
//             ans = (ans*10) + digit;
//             num = num/2;
//         }
//         binary.push_back(ans);
//         }

//         count1(binary);

//         for (int i = 0; i < binary.size(); i++)
//         {
//             cout<< binary[i]<< " ";
//         }
        
//     return 0;
// }


#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool if_prime(int num){ //function to return if a number is prime(true) or not(false)
        if (num <=1){ //0 and 0 is not prime
            return false;
        }
        int i =2;
        while (i < num){
            if (num % i == 0){
                return false;
            }
            i++;
        }
        return true;
    }

int main()
{
    vector<int> binary;
        
        int l = 6;
        int r = 10;
        int res = 0;
        for(int i = l; i<=r; i++)
       {
        int count=0;
        int num = i;
        while (num > 0){
            if (num % 2 == 1){
                count +=1;
                num = num/2;
            }
            else{
                num = num/2;
            }
        }
        if (if_prime(count)){
                res +=1;
        }
        }
        cout<< res;

return 0;

}
