class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        bool flag=false;
        while(!q.empty()){
            int k=q.size();
            vector<int> a;
            for(int i=0;i<k;i++){
                TreeNode* t=q.front();
                q.pop();
                a.push_back(t->val);
                    if(t->right) q.push(t->right);
                    if(t->left) q.push(t->left);
            }
            if(!flag) reverse(a.begin(),a.end());
            flag=!flag;
            res.push_back(a);
        }
        return res;
    }
};