#include<iostream>
using namespace std;
#include<stack>
bool isValid(string s) {
    stack<char> res;
    for(char i:s){
        if(i==')'){
            if(res.empty()) return false;
            if(res.top()=='(') {
                res.pop();
            }else return false;
        }else if(i=='}'){
            if(res.empty()) return false;
            if(res.top()=='{'){
                res.pop();
            }else return false;
        }else if(i==']'){
            if(res.empty()) return false;
            if(res.top()=='['){
                res.pop();
            }else return false;
        }else if(i=='(' || i=='[' || i=='{') res.push(i);
    }
    
    return res.empty();
}
