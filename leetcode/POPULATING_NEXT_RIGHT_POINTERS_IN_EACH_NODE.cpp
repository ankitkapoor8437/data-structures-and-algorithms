/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
#include<queue>
class Solution {
public:
    Node* connect(Node* root) 
    {
      //base condition
      if(root==NULL)
        return NULL;
      
      //created queue for level order traversal
      queue<Node*> q;
      q.push(root);
      q.push(NULL);
      //traversing the queue till empty
      while(!q.empty())
      {
        Node* current = q.front();
        q.pop();
        //Conditions to push the null in every level which lies to the right or in next pointer
        if(current==NULL && q.empty())
          return root;
        else if(current==NULL)
        { 
          q.push(NULL);
          continue;
        }
        else
        {
          current->next = q.front();
          // q.pop();
          if(current->left)
            q.push(current->left);
      
          if(current->right)
            q.push(current->right);
        }
          
      }
      return root;
    }
};