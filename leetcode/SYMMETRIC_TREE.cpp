
// using string vector iteration with bfs
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        queue<TreeNode*> nodesQ;
        nodesQ.push(root);
        while (!nodesQ.empty()) {
            vector<string> symStr;
            for (int i = nodesQ.size(); i > 0; i--) {
                TreeNode* cur = nodesQ.front();
                nodesQ.pop();
                if (cur->left) {
                    nodesQ.push(cur->left);
                    symStr.push_back(to_string(abs(cur->left->val)));
                } else {
                    symStr.push_back("N");
                }
                if (cur->right) {
                    nodesQ.push(cur->right);
                    symStr.push_back(to_string(abs(cur->right->val)));
                } else {
                    symStr.push_back("N");
                }
            }
            if (!isPalindrome(symStr)) {
                return false;
            }
        }
        return true;
    }
    
    bool isPalindrome(vector<string> &str) {
        int size = str.size();
        for (int i = 0; i < size / 2; i++) {
            if (str[i] != str[size - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};


// my own solution
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
#include<queue>
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        int countLeft = 0;
        int countRight = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left)
                {    q.push(temp->left);
                    countLeft++;
                }
                else
                {
                    countLeft--;    
                }
                
                if(temp->right)
                { q.push(temp->right);
                    countRight++;
                }
                else
                {
                    countRight--;
                }
            }
        }
        
        if(countLeft==countRight || countLeft==0 && countRight==0 )
            return true;
        else
            return false;
            
    }
};

// iterative method
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
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL)
        {
            return false;
        }
        
        queue<TreeNode*> q;
        
        q.push(root->left);
        q.push(root->right);
        
        while(!q.empty())
        {
            TreeNode* r1 = q.front();
            q.pop();
            TreeNode* r2 = q.front();
            q.pop();
            
            if(r1==NULL && r2==NULL )
                continue;
            if(r1==NULL || r2==NULL)
                return 0;
            if(r1->val != r2->val)
            
                return false;
            q.push(r1->left);
            q.push(r2->right);
            q.push(r1->right);
            q.push(r2->left);
            
        }
        return true;
    }
};



// recursive method
For two trees to be mirror images, the following three conditions must be true
1 - Their root node's key must be same 
2 - left subtree of left tree and right subtree of right tree have to be mirror images
3 - right subtree of left tree and left subtree of right tree have to be mirror images
class Solution {
public:
    
    bool isMirror(TreeNode* root1, TreeNode* root2){
	// If both trees are empty, then they are mirror images
        if(!root1 && !root2)
            return true;
        
        if(root1 && root2 && root1->val == root2->val)
            return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
			
		// if none of above conditions is true then root1 and root2 are not mirror images
        return false;
    }
    
	// Returns true if a tree is symmetric i.e. mirror image of itself
    bool isSymmetric(TreeNode* root) {
		// Check if tree is mirror of itself
        return isMirror(root, root);
    }
};