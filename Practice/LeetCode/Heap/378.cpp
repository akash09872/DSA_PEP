// leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for(auto i:matrix){
            for(int j:i){
                pq.push(j);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
    }
};