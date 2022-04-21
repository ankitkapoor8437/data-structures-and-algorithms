// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      
      int s = 0;
      int e = n;
      int mid = s + (e-s)/2;
      
      while(s<=e)
      {
        if(isBadVersion(s)==isBadVersion(e)==true)
        { 
          return s;
        }
        
        if(isBadVersion(mid)==true)
        {
            e = mid;
        }        
        if(isBadVersion(mid)==false)
        { 
          s = mid+1;
        }
        if(isBadVersion(s)==isBadVersion(e)==true)
         { 
          return s;
        }
        
        mid = s + (e-s)/2;
      }
        
      return -1;
    }
};