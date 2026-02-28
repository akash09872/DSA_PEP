// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};
        TreeNode* t=root;
        queue<TreeNode*> q;
        q.push(t);
        stack<vector<int>> st;
        q.push(NULL);
        vector<int> r;
        while(!q.empty()){
            TreeNode* k=q.front();
            q.pop();
            if(k==NULL){
                if(q.empty()) break;
                q.push(NULL);
                st.push(r);
                r={};
            }else{
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
                if(k) r.push_back(k->val);
            }
        }
        st.push(r);
        vector<vector<int>> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};