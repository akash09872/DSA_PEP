// https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(pq.size()>k) pq.pop();
        }
        priority_queue<int,vector<int>,greater<int>> pq2;
        vector<int> res;
        while(!pq.empty()){
            pq2.push(pq.top().second);
            pq.pop();
        }
        while(!pq2.empty()){
            res.push_back(nums[pq2.top()]);
            pq2.pop();
        }
        return res;
    }
};