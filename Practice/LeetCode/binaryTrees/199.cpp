class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int k;
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            if(t!=NULL){
                k=t->val;
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }else{
                res.push_back(k);
                if(q.empty()) break;
                q.push(NULL);
            }
        }
        return res;
    }
};