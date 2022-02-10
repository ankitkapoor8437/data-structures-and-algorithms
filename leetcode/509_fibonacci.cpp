class Solution {
public:
    int fib(int n) {
        
        int a = 0;
        int b = 1;
        int c = 0;
        if(n==0 || n==1)
            {   
                int c = n;
                return c;
            }
            else
            {
        for(int i = 2; i < n+1; i++)
        {
               
            c = a + b;
            a = b;
            b = c;
            }
        }    
        return c;
    }
};