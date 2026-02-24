// leetcode.com/problems/clone-graph
#include<bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:
    void clone(Node* node,Node* copy,unordered_map<int,Node*> &mp,unordered_map<int,bool> &vis){
        if(!node) return;
        vis[node->val]=true;
        vector<Node*> n;
        for(Node* i:node->neighbors){
            if(mp.find(i->val)==mp.end()){
                Node *t= new Node(i->val,{});
                mp[i->val]=t;
            }
            n.push_back(mp[i->val]);
        }
        copy->neighbors=n;
        for(Node* i:node->neighbors){
            if(vis.find(i->val)==vis.end() || !vis[i->val]){
                clone(i,mp[i->val],mp,vis);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(!node) return node;
        unordered_map<int,Node*> mp;
        unordered_map<int,bool> vis;
        Node* copy=new Node(node->val,{});
        mp[node->val]=copy;
        clone(node,copy,mp,vis);
        unordered_map<int,bool> vis2;
        return copy;
    }
};