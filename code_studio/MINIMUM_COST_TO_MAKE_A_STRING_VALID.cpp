#include<stack>
int findMinimumCost(string str) 
{
//   odd
    if(str.length() % 2 == 1)
    {
		return -1;
    }
    
    stack<char> s;
    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        
        if(ch=='{')
        {
			s.push(ch);
        }
        else
        {
//             char top = s.top();
			if( !s.empty() && s.top() == '{' )
            {
                s.pop();
            }
            else
            {
                    s.push(ch);
            }
        }
    }
//     if stack contains invalid expresion
        int a=0, b=0;

        while(!s.empty())
        {
            if(s.top() == '{')
            {
                b++;
            }
            else
            {
                a++;
            }
            s.pop();
        }
    
        int ans = (a+1)/2 + (b+1)/2;
        return ans;
}
    