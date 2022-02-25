
// love babber approach
void solve(stack<int>& myStack, int x)
{
//     base case
    if(myStack.empty())
    {
        myStack.push(x);
        return;
    }
    
    int num = myStack.top();
    myStack.pop();
    
//     recursive call
    solve(myStack, x);
    
    myStack.push(num);

}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int count = 0;
    int N = myStack.size();
    solve(myStack, x);
    return myStack;
}

// my approach
void solve(stack<int>& myStack, int x, int count, int size)
{
//     base case
    if(count == size)
    {
        myStack.push(x);
        return;
    }
    
    int num = myStack.top();
    myStack.pop();
    
//     recursive call
    solve(myStack, x, count+1, size);
    
    myStack.push(num);

}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int count = 0;
    int N = myStack.size();
    solve(myStack, x, count, N);
    return myStack;
}


// my approach with size
void solve(stack<int>& myStack, int x, int size)
{
//     base case
    if(size==0)
    {
        myStack.push(x);
        return;
    }
    
    int num = myStack.top();
    myStack.pop();
    
//     recursive call
    solve(myStack, x, size-1);
    
    myStack.push(num);

}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int N = myStack.size();
    solve(myStack, x, N);
    return myStack;
}
