// https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<long long> s;
        long long sum=0;
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            if(t!=NULL){
                sum+=t->val;
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }else{
                s.push_back(sum);
                sum=0;
                if(q.empty()) break;
                q.push(NULL);
            }
        }
        
        sort(s.rbegin(),s.rend());
        if(s.size()<k || k<1) return -1;   
        return s[k-1];
    }
};