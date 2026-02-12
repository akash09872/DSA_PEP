#include<iostream>
#include<queue>
using namespace std;
/* 
    Tree-> It is a non linear, hierarchical data structure consisting of nodes connected by edges.
    Binary Tree-> A tree is a binary tree when every node has at most 2 children;
    Terminologies:
        *Leaf-> A node of a tree which has no child;
        *Internal Node -> If a node is not leaf / it's
        *Siblings -> The children of same parent
        *Length Path -> Length of path is 1 less than the numver of nodes on the path
        *Ancestors and Descendents -> If there is a path fron node A to node B, then a is call the acestor of b and b is called a descendant of A;
        *Subtree -> Any node of a  tree with all of its descendents is a subtree.
        *Level -> the level of the node refers to its distance from the root, the root of the tree has generally level 0.
        *Height -> The maximum level in a tree determines its height. The height of a node in a tree is the length of the longest path from that node to a leaf.
        *Depth -> The depth of a node is the number of nodes along the path from the root to that node.
    
    Properties->
        1-> if h=height of a binary tree hten: 
                *maximum number of leaf be  2^h;
                *maximum number of nodes = 2^(h+1) -1;
        2-> if a binary tree contains m nodes at level l, hten it can have only 2m nodes at level (l+1)
        3-> Since a binary tree can contain at ost 2 node at level 0 (root) , it can contain at most 2^l nodes at level l.
        4-> The total number of edges in a full binary tree with n nodes is n-1;
    
    Types->
        Full BT -> A tree of height h has all its leaves at level h, means all non leaf nodees of a FBT have two children and the leaf node have no children;

        Complete Binary Tree -> All levels are filled except the last level, the last level should be filled from left to right.
        
*/

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preOrder(Node *root){
    if(!root) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inorder(Node *root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postOrder(Node *root){
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(Node* root){
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        cout<<q.front()->data<<" ";
        q.push(q.front()->left);
        q.push(q.front()->right);
        q.pop();
    }
}
int countLeaf(Node* root){
    if(!root) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return countLeaf(root->left)+countLeaf(root->right);
}
int main(){
    int n=0;
    Node * root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(7);
    // levelOrder(root);
    cout<<countLeaf(root);
}