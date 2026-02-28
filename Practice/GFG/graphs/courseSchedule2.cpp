// https://www.geeksforgeeks.org/problems/course-schedule/1


#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<vector<int>> adj(n);
        vector<int> indeg(n,0);
        for(auto i:prerequisites){
            int u=i[1];
            int v=i[0];
            adj[u].push_back(v);
            indeg[v]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0) q.push(i);
        }
        vector<int> res;
        while(!q.empty()){
            int k=q.front();
            res.push_back(k);
            for(int i:adj[k]){
                indeg[i]--;
                if(indeg[i]==0) q.push(i);
            }
            q.pop();
        }
        if(res.size()!=n) return {};
        return res;
        
    }
};