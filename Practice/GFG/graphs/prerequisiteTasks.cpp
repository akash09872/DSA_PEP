// https://www.geeksforgeeks.org/problems/prerequisite-tasks/1

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        // Code here
        vector<vector<int>> adj(N);
        vector<int> indeg(N,0);
        for(auto i:prerequisites){
            int v=i.first;
            int u=i.second;
            adj[u].push_back(v);
            indeg[v]++;
        }
        vector<int> res;
        queue<int> q;
        for(int i=0;i<N;i++){
            if(indeg[i]==0) q.push(i);
        }
        while(!q.empty()){
            int k=q.front();
            res.push_back(k);
            for(int i:adj[k]){
                indeg[i]--;
                if(indeg[i]==0) q.push(i);
            }
            q.pop();
        }
        if(res.size()!=N) return false;
        return true;

    }
};

