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
///Using inorder traversal and two pointer method
class Solution {
private:
  vector<int> tree;
  bool inOrder(TreeNode* root, int target)
  {
      if(root==NULL)
        return false;

      inOrder(root->left, target);
      tree.push_back(root->val);
      inOrder(root->right, target);

    int l = 0, r = tree.size()-1;
        while (l < r) 
        {
          if (tree[l] + tree[r] == target) 
            return true;
          else 
          {
                if (tree[l] + tree[r] < target)
                  l++;
                else 
                  r--;
      }
    }
    return false;
  }

  
public:
    bool findTarget(TreeNode* root, int k) {
        
      if(root==NULL)
        return false;
      
      return inOrder(root, k);
      
      
    }
};