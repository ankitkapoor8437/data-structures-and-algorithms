class Solution {
public:
    bool isValid(string s) {
        
//         created a stack to push the string s
        stack<char> st;
        
//         traversing the string s
        for(int i=0; i<s.length(); i++)
        {
            char ch = s[i];
//             if openening bracket, stack push
            
            if(ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
//          check the other condition
            else
            {
//                 if closing bracket, stack ka top check kro and pop kro
                if(!st.empty())
                {
                    char top = st.top();
                    if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};