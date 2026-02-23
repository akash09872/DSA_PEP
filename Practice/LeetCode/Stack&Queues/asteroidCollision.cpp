#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        for(int i=0;i<a.size();i++){
            bool shouldPush=true;
            while(!st.empty() && st.top()>0){
                int t=st.top();
                if(t<0) break;
                if(t==a[i]*-1){
                    st.pop();
                    shouldPush=false;
                    break;
                }else if(t==a[i] || t*a[i] >0){
                    break;
                }else if(abs(t)<abs(a[i]) && a[i]<0){
                    st.pop();
                }else if(abs(t)>abs(a[i]) && a[i]<0){
                    shouldPush=false;
                    break;
                }
            }
            if(shouldPush) st.push(a[i]);
        }
        vector<int> ans(st.size());
        for(int i=ans.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};