// https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1
#include<bits/stdc++.h>
using namespace std;

/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int countNodes(Node* root){
        if(!root) return 0;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    bool isCBT(Node* root,int idx,int count){
        if(!root) return true;
        if(idx>=count) return false;
        else{
            bool left=isCBT(root->left,idx*2+1,count);
            bool right=isCBT(root->right,idx*2 + 2, count);
            return left&&right;
        }
    }
    bool isMaxOrderHeap(Node* root){
        if(root->left==NULL && root->right==NULL) return true;
        if(root->right==NULL) return (root->data >root->left->data);
        else{
            bool le=(isMaxOrderHeap(root->left));
            bool ri=(isMaxOrderHeap(root->right));
            
            return (le&& ri&& (root->left->data < root->data && root->right->data < root->data));
        }
    }
    bool isHeap(Node* tree) {
        // code here
        int n=countNodes(tree);
        return isCBT(tree,0,n) && isMaxOrderHeap(tree);
    }
};