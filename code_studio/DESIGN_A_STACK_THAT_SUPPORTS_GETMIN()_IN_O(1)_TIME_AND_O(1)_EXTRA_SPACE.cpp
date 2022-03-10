#include<stack>
#include<limits.h>


class SpecialStack {
    // Define the data members.
	stack<int> s;
    int mini = INT_MAX;

    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
//         check if the stack is empty
        if(s.empty())
        {
            s.push(data);
            mini = data;            
        }
        else
        {
        if(data<mini)
        {
            int value = 2*data - mini;
            s.push(value);
            mini = data;
        }
            else
            {
            	s.push(data);    
            }
        }
        
    }

    int pop() {
        if(s.empty())
        {
            return -1;
        }
        
		int current = s.top();
        s.pop();
        {
            if(current > mini)
            {
                return current;
            }
            else
            {
                int prevMini = mini;
                int value = 2*mini - current;
                mini = value;
                return prevMini;
			}
        }
    }

    int top() {
        if(s.empty())
        {
            return -1;
        }
        
        int current = s.top();
        if(current<mini)
        {
        	return mini;    
        }
        else
        {
        	return current;    
        }
    }
    

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if(s.empty())
        {
            return -1;
        }
        else{
            return mini;
        }
    }  
};


// or

#include<stack>
#include<limits.h>


class SpecialStack {
    // Define the data members.
	stack<int> s;
    int mini = INT_MAX;

    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
//         check if the stack is empty
        if(s.empty())
        {
            s.push(data);
            mini = data;            
        }
        else
        {
        if(data<mini)
        {
            int value = 2*data - mini;
            s.push(value);
            mini = data;
        }
            else
            {
            	s.push(data);    
            }
        }
        
    }

    int pop() {
        if(s.empty())
        {
            return -1;
        }
        
		int current = s.top();
        s.pop();
        {
            if(current > mini)
            {
                return current;
            }
            if(current==mini)
            {
                return current;
                mini = INT_MAX;
            }
            else
            {
                int prevMini = mini;
                int value = 2*mini - current;
                mini = value;
                return prevMini;
			}
        }
    }

    int top() {
        if(s.empty())
        {
            return -1;
        }
        
        int current = s.top();
        if(current<mini)
        {
        	return mini;    
        }
        else
        {
        	return current;    
        }
    }
    

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if(s.empty())
        {
            return -1;
        }
        else{
            return mini;
        }
    }  
};