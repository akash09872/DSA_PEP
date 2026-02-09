#include<iostream>
using namespace std;
#include<algorithm>
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
    void delMidHelper(int k){
        int n=this->peek();
        this->pop();
        if(k==this->top-1){
            return;
        }
        delMidHelper(k);
        this->push(n);
    }
    void delMid(){
        int k=top/2;
        delMidHelper(k);
    }
    void show(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
    void pushBottom(int val){
        int k=top;
        this->pop();
        if(this->isEmpty()) this->push(val);
        this->push(k);
    }
};


int main(){
    MyStack s(5);
    // cout<<"Is Empty: "<<s.isEmpty()<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // s.delMid();
    // cout<<s.peek()<<endl;
    // cout<<s.size;
    s.pushBottom(9);
    s.show();
}