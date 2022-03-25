void interLeaveQueue(queue < int > & q) {
    queue<int> newq;
    int n = q.size()/2;
    for(int i=0; i<n; i++)
    {
        int val = q.front();
        q.pop();
        newq.push(val);
    }
    
    while(!newq.empty())
    {
        int val = newq.front();
        newq.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }
}