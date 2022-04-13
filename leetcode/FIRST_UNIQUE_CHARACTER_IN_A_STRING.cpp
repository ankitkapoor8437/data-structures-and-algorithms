class Solution {
public:
    int firstUniqChar(string s) {
        
//         initialized an array with 26 size and marked the values as 0;
        int count[26]={0};
        
//         traversing the string and adding the count of character into the count array
        for(int i=0; i<s.length(); i++)
        {
            count[s[i]-'a']++;
        }
        
//         traversing the count array to check the first unique character
        for(int i=0; i<s.length(); i++)
        {
            if(count[s[i]-'a'] == 1 )
                return i;
        }
        
        return -1;
        
    }
};