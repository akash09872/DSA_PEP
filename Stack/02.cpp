#include<iostream>
using namespace std;

class MyStack{
    public:
    int size;
    int *arr;
    int top;
    MyStack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int val){
        if(top==size-1) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top==-1) {
            cout<<"Stack empty"<<endl;
            return 0;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }
};


int main(){
    MyStack s(5);
    cout<<"Is Empty: "<<s.isEmpty()<<endl;
    s.push(1);
    s.push(2);
    s.pop();
    cout<<s.peek()<<endl;
}