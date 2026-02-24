// leetcode.com/problems/sum-in-a-matrix

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<priority_queue<int>> v(n);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                v[i].push(nums[i][j]);
            }
        }
        int sum=0;
        for(int i=0;i<nums[0].size();i++){
            priority_queue<int> pq;
            for(int j=0;j<n;j++){
                pq.push(v[j].top());
                v[j].pop();
            }
            cout<<pq.top()<<" ";
            sum+=pq.top();
        }
        return sum;
    }
};