#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevSmaller(vector<int>& arr) {
    // code here
    int n=arr.size();
    vector<int> ps(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ps[i]=-1;
        }else{
            ps[i]=st.top();
        }
        st.push(arr[i]);
    }
    return ps;
}
