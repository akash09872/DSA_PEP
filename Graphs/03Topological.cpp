/*
    Topological Sort->
        ~ Always valid only on DAGs(Directed Acyclic Graphs)
        # When we write linear order of a graph then for every u -> v :
            u must be written before v in that ordering
        
        adjList->
            1 -> 2,4
            2 -> 3
            3 ->
            4 -> 3

        1,2,3,4  ❌Not correct , 4 after before 3
        4,3,2,1  ❌Not correct, 2 comes after 3 and 1 comes after 2 & 4
        1,2,4,3  ✅All u come before it's v.

*/

#include<bits/stdc++.h>
using namespace std;
void adjList(int v,vector<vector<int>> &edges,vector<vector<int>> &adj){
    for(auto it:edges){
        adj[it[0]].push_back(it[1]);
    }
}
void dfs(int node,vector<vector<int>> &adj,vector<bool> &vis,stack<int> &st){
    vis[node]=true;
    for(auto neighbor:adj[node]){
        if(!vis[neighbor]){
            dfs(neighbor,adj,vis,st);
        }
    }
    st.push(node);
}
vector<int> topoSort(int V, vector<vector<int>>& edges) {
    // code here
    vector<vector<int>> adj(V);
    adjList(V,edges,adj);
    vector<bool> vis(V,false);
    stack<int> st;
    for(int i=0;i<V;i++){
        if(!vis[i]) dfs(i,adj,vis,st);
    }
    vector<int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
}