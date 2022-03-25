vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
            deque<long long int> dq;
            
            vector<long long> ans;
            
            // for processing first window
            
            for(int i = 0; i< K; i++)
            {
                if(A[i]<0)
                {
                    dq.push_back(i);
                }
            }
            
             // store ans for first K size window
                
                if(dq.size()>0)
                {
                    ans.push_back(A[dq.front()]);
                }
                else
                {
                    ans.push_back(0);
                }
                
                // process for remaining windows
                
                for(int i = K; i<N; i++)
                {
                    // remove ka logic
                    if(!dq.empty() && i-dq.front()>=K)
                    {
                        dq.pop_front();
                    }
                    
                    // addition ka logic
                    
                    if(A[i]<0)
                    {
                        dq.push_back(i);
                    }
                    
                    // store ans
                    if(dq.size()>0)
                    {
                        ans.push_back(A[dq.front()]);
                    }
                    else
                    {
                        ans.push_back(0);
                    }
                }
                return ans;
 }