#include<iostream>
using namespace std;

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

//creating Trie
class Trie
{
    public:
    TrieNode* root;

    //creating constructer
    Trie()
    {
        //NULL character
        root = new TrieNode('\0');
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
        int index = word[0]-'A';
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
            root->children[index] = child;
        }
        //RECUSIVE FUNCTION
        insertutil(child, word.substr(1));
    }


    void insertWord(string word)
    {
        insertutil(root, word);
    }

    //SEARCHING IN TRIE
    bool searchutil(TrieNode* root, string word)
    {
        // base case
        if (word.length()==0)
        {
            return root->isTerminal;
        }

        int index = word[0]-'A';
        TrieNode* child;

        if (root->children[index]!=NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        //RECURSIVE CALL
        return searchutil(child, word.substr(1));
    }

    bool searchutil(string word)
    {
        return searchutil(root, word);
    }

};

int main()
{
    Trie* t = new Trie();
    t->insertWord("ABCD");

    cout<< "PRESENT OR NOT: " << t->searchutil("ABCD") << endl;


    return 0;
}
