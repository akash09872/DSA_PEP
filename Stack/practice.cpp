#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str="Hello how are you?";
    stack<string> st;
    string a="";
    for(char i:str){
        if(i==' ' || i=='\0'){
            st.push(a);
            a="";
            continue;
        }
        a=i+a;
    }
    st.push(a);
    while(!st.empty()){
        cout<<" "<<st.top();
        st.pop();
    }
}