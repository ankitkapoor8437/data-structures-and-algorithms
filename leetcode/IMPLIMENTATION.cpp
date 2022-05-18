class TrieNode
{
    //Data members for the Trie data structure
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        //if the we are at the starting which means NULL so we are making isTerminal is false
        TrieNode(char ch)
        {
            data = ch;
            for (int i = 0; i < 26; i++)
            {
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie 
{
  TrieNode* root;
  
  public:
    Trie() 
    {
      root = new TrieNode('\0');    
    }
    
    //INSERTION IN TRIE
    void insertutil(TrieNode* root, string word)
    {
      //base case
      if(word.length()==0)
      {
        root-> isTerminal = true;
        return;
      }
      
      int index = word[0]-'a';
      TrieNode* child;
      
      if(root->children[index]!=NULL)
      {
        child = root->children[index];
      }
      else
      {
        child = new TrieNode(word[0]);
        root->children[index] = child;
      }
      
      //Recursive call
      insertutil(child, word.substr(1));
      
    }
  
    void insert(string word) 
    {
      insertutil(root, word);    
    }
    
    //SEARCH IN TRIE
  
    bool searchutil(TrieNode* root, string word)
    {
      //base case
      if(word.length()==0)
      {
        return root->isTerminal;
      }
      
      int index = word[index]-'a';
      
      TrieNode* child;
      if(root->children[index]!=NULL)
      {
        child = root->children[index];
      }
      else
      {
        return false;
      }
      
      return searchutil(child, word.substr(1));
      
    }
  
  
    bool search(string word) {
        return searchutil(root, word);
    }
  
  
    
    //PREFIX FIND IN THE TRIE
  
    bool prefixutil(TrieNode* root, string word)
    {
        //basecase
      if(word.length()==0)
         return true;
         
      int index = word[0]-'a';
      TrieNode* child;
      if(root->children[index]!=NULL)
         {
            child = root->children[index];
         }
         else
         {
           return false;
         }
      return prefixutil(child, word.substr(1));
    }
  
    bool startsWith(string prefix) {
        return prefixutil(root, prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */