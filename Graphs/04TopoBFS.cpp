
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  //USING BFS
    void adjList(int v,vector<vector<int>> &edges,vector<vector<int>> &adj,vector<int> &indeg){
        // making adjacency list and indegree list.
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            indeg[it[1]]++;
        }
    }
    
    
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        vector<int> indeg(V,0); //indegree
        adjList(V,edges,adj,indeg); 
        vector<int> res;
        // pushing with indegree 0;
        queue<int> q;
        for(int i=0;i<V;i++){
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
            
        if(res.size()!=V) return {};
        
        return res;
    }
};