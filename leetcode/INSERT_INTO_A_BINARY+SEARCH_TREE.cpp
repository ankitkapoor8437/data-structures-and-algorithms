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
/// using iterative method 
class Solution {
private:
    TreeNode* CreateNode(int val)
    {
        TreeNode* newNode = new TreeNode(val);
        // if (!newNode) {
        //     // cout << "Memory error\n";
        //     return NULL;
        // }
        // newNode->val = val;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        // If the tree is empty, assign new node address to root
        if (root == NULL) {
            root = CreateNode(val);
            return root;
        }

        // Else, do level order traversal until we find an empty
        // place, i.e. either left child or right child of some
        // node is pointing to NULL.
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp->val > val)
            {
                if (temp->left) 
                q.push(temp->left);
                else 
                {
                temp->left = CreateNode(val);
                return root;    
                }
            }
            else{
                if (temp->right)
                    q.push(temp->right);
                else 
                {
                    temp->right = CreateNode(val);
                    return root;
                }
            }
        }
        return root;
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

// using recursive method
class Solution {
private:
    TreeNode* CreateNode(int val)
    {
        TreeNode* newNode = new TreeNode(val);
        // if (!newNode) {
        //     // cout << "Memory error\n";
        //     return NULL;
        // }
        // newNode->val = val;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        // If the tree is empty, assign new node address to root
        if (root == NULL) {
            root = CreateNode(val);
            return root;
        }
        
        if(root->val> val)
             root->left = insertIntoBST(root->left, val);
        else
            root->right = insertIntoBST(root->right, val);
        
        return root;

    }
};