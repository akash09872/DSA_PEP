void preorder(TreeNode* root , vector<int> &s){
    if(!root) return;
    s.push_back(root->val);
    preorder(root->left,s);
    preorder(root->right,s);
}
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    preorder(root,ans);
    return ans;
}

    void inorder(TreeNode* root, vector<int> &a){
        if(!root) return;
        inorder(root->left,a);
        a.push_back(root->val);
        inorder(root->right,a);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return ans;
    }
