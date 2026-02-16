// https://leetcode.com/problems/binary-tree-level-order-traversal/description/?envType=problem-list-v2&envId=binary-tree


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        q.push(NULL);
        res.push_back({});
        while(!q.empty()){
            int k=res.size()-1;
            TreeNode* t=q.front();
            q.pop();
            if(t==NULL){
                if(q.empty()) break;
                q.push(NULL);
                res.push_back({});
            }else{
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
                res[k].push_back(t->val);
            }
        }
        return res;
    }
};