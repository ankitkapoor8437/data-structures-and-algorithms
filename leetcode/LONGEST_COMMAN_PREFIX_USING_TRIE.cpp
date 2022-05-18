class TrieNode
{
  public:
  char data;
  TrieNode* children[26];
  int childCount;
  bool isTerminal;
  
  TrieNode(char ch)
  {
    data = ch;
    for(int i = 0 ; i < 26; i++)
    {
      children[i] = NULL;
    }
    childCount = 0;
    isTerminal = false;
  }
};


class Trie{
  public:
  TrieNode* root;
  
  Trie(char ch)
  {
    root = new TrieNode(ch);
  }
  
  //INSERTION IN TRIE
  void insertutil(TrieNode* root, string word)
  {
      //base case
      if(word.length()==0)
      {
          root->isTerminal = true;
          return;
      }
      //ASSUMPTION WORD WILL BE IN CAPS.
      int index = word[0]-'a';
      TrieNode* child;

      // if present
      if (root->children[index]!=NULL)
      {
          child = root->children[index];
      }
      else
      {
          //if absent
          child = new TrieNode(word[0]);
          root->childCount++;
          root->children[index] = child;
      }
      //RECUSIVE FUNCTION
      insertutil(child, word.substr(1));
  }


  void insertWord(string word)
  {
      insertutil(root, word);
  }
  
  void lcp(string str, string &ans)
  {
    for(int i =0 ; i< str.length(); i++)
    {
      char ch = str[i];
      if(root->childCount==1)
       { 
        ans.push_back(ch);
        
        int index = ch-'a';
        root = root->children[index];
       }
      else
      {
        break;
      }
      
      if(root->isTerminal)
        break;
    }
  }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
      Trie* t = new Trie('\0');
      int n = strs.size();
      for(int i=0; i<n; i++)
      {
        t->insertWord(strs[i]);
      }
      
      string first = strs[0];
      string ans = "";
       
      t->lcp(first, ans);
      
      return ans;
    
    }
};