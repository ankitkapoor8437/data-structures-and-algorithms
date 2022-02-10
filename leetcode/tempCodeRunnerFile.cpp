 void count1(vector<int> binary)
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
