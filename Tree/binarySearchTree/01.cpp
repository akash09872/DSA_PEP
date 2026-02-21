/*
    Binary Search Tree -> 
        It's a speacial type of tree where->
            #Every node has at most two children.
            #For every Node-
                All values in the LST are smaller
                All values in the RST are greater
            #Both LST and RST are also BST
        
            #Inorder traversal of a BST is always sorted.

*/

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};