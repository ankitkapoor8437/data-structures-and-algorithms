vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        build(root, ans);
        return ans;
    }
    void build(TreeNode* root, vector<int>& ans)
    {
        if(!root)
            return;
        ans.push_back(root->val);
        build(root->left, ans);
        build(root->right, ans);
    }