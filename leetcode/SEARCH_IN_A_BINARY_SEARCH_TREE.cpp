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
///Iterative solution
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        
        if(root==NULL)
            return NULL;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->val==val)
                return temp;
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right) 
                q.push(temp->right);
            }
            
        }
        return NULL;
    }   
        
};


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
/// Recursive Solution 
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        
        if(root==NULL || root->val == val)
            return root;
        
        if (val < root->val)
            return searchBST(root->left, val);
        
        return searchBST(root->right, val);
    }   
        
};