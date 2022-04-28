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
class Solution 
{
private:
  TreeNode* merge(TreeNode* root1, TreeNode* root2)
  {
    //base conditions
    if(root1==NULL && root2==NULL)
      return NULL;
    if(root1!=NULL && root2==NULL)
      return root1;
    if(root1==NULL && root2!=NULL)
      return root2;
    
    // if every conditions are false then create a new TreeNode SUM
    TreeNode* Sum = new TreeNode(root1->val + root2->val);
    
    //recursive call for left nodes 
    Sum->left = merge(root1->left, root2->left);
    //recursive call for right nodes
    Sum->right = merge(root1->right, root2->right);
    
    //returning the new merged node
    return Sum;
  }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
    {
      // function call for the merge function
      return merge(root1, root2);
      
    }
};