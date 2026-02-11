// https://leetcode.com/problems/next-greater-element-i/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans(nums1.size());
    for(int i=0;i<nums1.size();i++){
        stack<int> st;
        int j=nums2.size()-1;
        while(nums2[j]!=nums1[i]){
            st.push(nums2[j]);
            j--;
        }
        while(!st.empty() && st.top()<=nums2[j]){
            st.pop();
        }
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();
    }
    return ans;
}