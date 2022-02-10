#include<iostream>
using namespace std;

int main()
{
    int num =526;

    int r1=0;
        
    while(num!=0){
        int digit=num%10;
        r1 = (r1*10)+digit;
        num = num/10;
    }
    cout<< r1<<endl;

    int r2 = 0;
    while(r1!=0){
        int digit=r1%10;
        r2 = (r2*10)+digit;
        r1 = r1/10;
    }

    
    cout<< r2<< endl;









    return 0;
}
