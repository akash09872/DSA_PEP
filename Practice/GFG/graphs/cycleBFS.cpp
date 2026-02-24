// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void adjList(int v,vector<vector<int>> &edges,vector<vector<int>> &adj){
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
    }
    bool cycleBFS(int src,vector<bool> &vis,vector<vector<int>> &adj){
        queue<pair<int,int>> q;
        q.push({src,-1});
        vis[src]=true;
        while(q.size()>0){
            int curr=q.front().first;
            int par=q.front().second;
            q.pop();
            for(int i:adj[curr]){
                if(!vis[i]) {
                    q.push({i,curr});
                    vis[i]=true;
                }else if(i!=par) {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        adjList(V,edges,adj);
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(cycleBFS(i,vis,adj)) return true;
            }
        }
        return false;
    }
};