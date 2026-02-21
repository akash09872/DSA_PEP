// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        //outer map -> for horizontal distance(hd) (sorts automatically);
        //inner map -> for level (sorts level -> top to bottom);
        map<int,map<int,multiset<int>>> mp;
        // stores node and it's hd, and depth
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            TreeNode* node=curr.first;
            int hd=curr.second.first;
            int d=curr.second.second;
            mp[hd][d].insert(node->val);
            
            // if left exist, hd-1,d+1(depth);
            if(node->left) q.push({node->left,{hd-1,d+1}});
            //if right exist, hd+1,d+1
            if(node->right) q.push({node->right,{hd+1,d+1}});            
        }
        for(auto &it:mp){
            res.push_back({});
            int n=res.size()-1;
            for(auto s:it.second){
                for(int i:s.second){
                    res[n].push_back(i);
                }
            }
        }
        return res;
    }
};