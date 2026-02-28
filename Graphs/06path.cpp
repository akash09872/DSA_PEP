// Shortest path in DAG


#include<bits/stdc++.h>
using namespace std;
void dfs(int s,vector<int> &parent,vector<int> &distance,vector<bool> &vis,unordered_map<int,vector<pair<int,int>>> &adj){
    vis[s]=true;
    for(auto i:adj[s]){
        int node=i.first;
        int w=i.second;
        if(!vis[node]){
            parent[node]=s;
            int dis=distance[parent[node]];
            distance[node]=dis+w;
            dfs(node,parent,distance,vis,adj);
            vis[node]=true;
        }else if(distance[node]>(w+distance[s])){
            distance[node]=w+distance[s];
            dfs(node,parent,distance,vis,adj);
        }
    }
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    // Write your code here
    if(n==0) return{};
    vector<int> distance(n,INT_MAX);
    vector<int> parent(n,-1);
    unordered_map<int,vector<pair<int,int>>> adj;
    distance[0]=0;
    for(auto i:edges){
        adj[i[0]].push_back({i[1],i[2]});
    }
    vector<bool> vis(n,false);
    dfs(0,parent,distance,vis,adj);
    for(int i=0;i<distance.size();i++){
        if(distance[i]==INT_MAX) distance[i]=-1;
    }
    return distance;

}
