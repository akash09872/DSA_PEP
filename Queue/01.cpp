#include<iostream>
using namespace std;
class MyQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    MyQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    void push(int val){
        if(rear=size-1){
            cout<<"Stack OverFlow"<<endl;
            return;
        }
        if(front==-1) front=0;
        rear++;
        arr[rear]=val;
    }
    int peek(){
        if(front==rear || rear==-1){
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        return arr[front];
    }
    bool isEmpty(){
        if(rear==-1 || front==rear-1){
            return true;
        }
        return false;
    }
    void pop(){

    }

};