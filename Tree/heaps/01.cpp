/*
    -Complete Binary Tree (CBT) -> All levels are completely filled except the last level, the last level is filled from left to right
    
    -Heap order Property -> 
            1. Max Heap -> Every Parent Nodde is greater than or equal to it's children
            2. Min Heap -> Every parent node is smaller than or equal to is children
                           The Smallest element is always at top.
    
    ~~ IMPORTANT -> Heap is not a BST.


    For 1 based Indexing :
            for i
                index of left child of i -> 2*i
                index of right child of i -> 2*i + 1
                index of parent of i     ->  i/2; 

    For 0 based Indexing:
            For i:
                index of left child -> 2*i + 1;
                index of rihgt child -> 2*i + 1;
                index of parenf of i -> (i-1)/2;
*/


#include<iostream>
#include<vector>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;
    void bubbleUp(int index){
        while(index>0){
            // find the parent
            int parent=(index-1)/2;

            // if curr ndoe > parent
            if(heap[index] >heap[parent]) {
                swap(heap[index],heap[parent]);
                index=parent;
            }else break;
        }
    }
    void bubbleDown(){
        int i=1;
        int n=heap.size();
        int left,right;
        while(i<heap.size()){
            left=i*2+1;
            right=i*2 + 2;
            int largest=i;
            if(right<n && heap[right]>heap[i]){
                largest=right;
            }
            if(left<n && heap[left]>heap[i]){
                largest=left;
            }
            if(largest!=i){
                swap(heap[i],heap[largest]);
                i=largest;
            }else{
                break;
            }
        }
    }
    void pop(){
        int n=heap.size()-1;
        swap(heap[0],heap[n]);
        bubbleDown();
    }
    void show(){
        for(int i:heap){
            cout<<i<<" ";
        }
    }
    void insert(int val){
        heap.push_back(val);
        bubbleUp(heap.size()-1);
        // Time complexity will be Log(n) , It will insert and compare to it's half so it's search space will going half every time.
    }
};

int main(){
    int k=0;
    while(k<6){

    }
}