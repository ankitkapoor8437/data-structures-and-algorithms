#include<iostream>
using namespace std;

    
    int squareroot(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1;
        while(s<=e)
        {
            long long int square = mid*mid;
            if(square == n)
                return mid;
            
            if(square<n){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
         return ans;
    }
    
double more(int n, int p , int tempsol ){

    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < p; i++)
    {
        factor = factor/10;
    
        for (double j = ans ; j*j < n; j = j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
}


int main()
{
    int n ;
    cin>> n;
q
    int tempsol = squareroot(n);

    cout<< more(n,3,tempsol);
    /* code */
    return 0;
}

