/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/// using inorder traversal
#include<vector>
class Solution {
private:
      vector<int>tree;
      void inOrder(TreeNode* root)
      {

        if(root==NULL)
          return;

        inOrder(root->left);
        tree.push_back(root->val);
        inOrder(root->right);
      }

public:
    bool isValidBST(TreeNode* root) 
    {
        
      if(root==NULL)
          return true;
      
      inOrder(root);
      
      for(int i=1; i< tree.size(); i++)
        if(tree[i] <= tree[i-1])
          return false;

      return true;
    }

};


///recursive method

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBSTHelper (TreeNode* currentNode, TreeNode* min, TreeNode* max) {
        if (currentNode==NULL)
          return true;
      
        if (min != NULL && currentNode->val <= min->val)
          return false;
        if (max != NULL && currentNode->val >= max->val)
          return false;

        return isValidBSTHelper (currentNode->left, min, currentNode) && isValidBSTHelper (currentNode->right, currentNode, max);
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper (root, NULL, NULL);
    }
};

// Keep in Mind
// Passing NULL to int will cast NULL to 0 in integer.
// So, It will give wrong result for [0, null, -1].
// If someone will pass INT_MIN as default value, then It'll fail for case - [-2147483648] and vice-versa.
// That's why pointers are used here.
// One can use TreeNode addresses as pointers.