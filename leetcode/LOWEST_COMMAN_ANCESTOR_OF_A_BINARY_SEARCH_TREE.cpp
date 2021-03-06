/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//recursive method 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
      if(root==NULL || root==p || root==q)
        return root;
        
      //now recursively traverse left and right subtree
      TreeNode* left = lowestCommonAncestor( root->left , p,  q); 
      TreeNode* right = lowestCommonAncestor(root->right ,  p, q);
      
      ///result
      if(left==NULL)
        return right;
      
      if(right==NULL)
        return left;
      
      else
        return root;
      
    }
};