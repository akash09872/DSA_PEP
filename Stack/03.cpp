// Using linked list to make a stack
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        this->data=val;
        next=NULL;
    }
};
class MyStack{
    public:
    Node *top;
    MyStack(){
        top=NULL;
    }
    void push(int val){
        Node *n=new Node(val);
        if(top==NULL) {
            top=n;
            return;
        }
        n->next=top;
        top=n;    
    }
    int peek(){
        if(!top){
            cout<<"Stack is empty"<<endl;
        }
        return top->data;
    }
    void pop(){
        Node *temp =top;
        top=top->next;
        delete temp;
    }
    bool isEmpty(){
        if(!top) return true;
        return false;
    }
};

int main(){
    MyStack s;
    cout<<s.isEmpty()<<endl;
    s.push(5);
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.peek()<<endl;
}