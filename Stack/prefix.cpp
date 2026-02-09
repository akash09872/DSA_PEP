#include<iostream>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;
int operate(int a, int b, char i){
    if(i=='*') return a*b;
    if(i=='/') return a/b;
    if(i=='+') return a+b;
    if(i=='-') return a-b;
    if(i=='^') return(pow(a,b));
}
int prefix(string s){
    //if (s[i]) is operand -> push in the stack
    // else if it is operatore create 2 variable of tops of stack elements and then applly the operator
    // push back the result;
    // return the last remaining element from stack-> it's the answer;
    reverse(s.begin(), s.end());
    stack<int> st;
    for(char i:s){
        if(i=='+' || i=='-' || i=='*' || i=='/'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push(operate(a,b,i));
        }else{
            st.push(i-'0');
            int a=i-'0';
        }
    }
    return st.top();
}

int main(){
    cout<<prefix("-+7*45+20");
}