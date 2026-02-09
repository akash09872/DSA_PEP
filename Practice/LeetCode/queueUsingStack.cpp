#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        cout <<"Wow!";
    }
    
    void push(int x) {
        if(s.empty()){
            s.push(x);
            return;
        }
        int k=s.top();
        s.pop();
        push(x);
        s.push(k);
    }
    
    int pop() {
        int k=s.top();
        s.pop();
        return k;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};
