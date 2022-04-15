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

// using BFS using queue method
#include<queue>
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
//         base case
        if(root==NULL)
            return 0;
        
        int count = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            // vector<int> v;
            
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                // v.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            count++;
        }
     return count;
    }
};


// using recursive
if (root==NULL)
{
    return 0;
}

return 1 + max(maxDepth(root->left, maxDepth(root->right)));
