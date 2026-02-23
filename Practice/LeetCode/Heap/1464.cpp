// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i:nums) pq.push(i);
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        return (a-1)*(b-1);
    }
};