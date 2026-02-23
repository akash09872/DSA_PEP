// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/?envType=problem-list-v2&envId=heap-priority-queue
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> soldiers;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]) count++;
            }
            soldiers.push_back(count);
        }
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            pq.push({soldiers[i],i});
            if(pq.size()>k) pq.pop();
        }
        vector<int> result(pq.size());
        int i=pq.size()-1;
        while(!pq.empty()){
            result[i--]=pq.top().second;
            pq.pop();
        }
        return result;
    }
};