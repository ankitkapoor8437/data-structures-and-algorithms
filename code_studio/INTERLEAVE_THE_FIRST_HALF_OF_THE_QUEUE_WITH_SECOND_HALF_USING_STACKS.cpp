void interLeaveQueue(queue < int > & q) {
    stack<int> s;
    int n = q.size()/2;
    
    for(int i=0; i<n; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    for(int i=0; i<n; i++)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    for(int i=0; i<n; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }
    
    
}