#include<stack>
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    
    
    void push(int x) 
    {
        s1.push(x);        
    }
    
    int pop() 
    {
        if(!s2.empty())
        {
           int ans = s2.top();
           s2.pop();
           return ans;
        }
        else
        {
            while(!s1.empty())
            {
                int ans = s1.top();
                s1.pop();
                s2.push(ans);
            }
            int ans = s2.top();
            s2.pop();
            return ans;
        }
    }
    
    int peek() 
    {
        if(!s2.empty())
        {
           int ans = s2.top();
           return ans;
        }
        else
        {
            while(!s1.empty())
            {
                int ans = s1.top();
                s1.pop();
                s2.push(ans);
            }
            int ans = s2.top();
            return ans;
        }
    }
    
    bool empty() {
        if(!s2.empty())
            return false;
        else if(s2.empty() && !s1.empty())
            return false;
        else if(s2.empty() && s1.empty())
            return true;
        else 
            return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */