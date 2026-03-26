#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    class edge{
        public:
        int v;
        int wt;
        edge(int v,int wt){
            this->v=v;
            this->wt=wt;
        }
    };
    void adjList(vector<vector<edge>> &adj,vector<vector<int>> &edges){
        for(vector<int> i:edges){
            int u=i[0];
            int v=i[1];
            int wt=i[2];
            edge e(v,wt);
            adj[u].push_back(e);
        }
    }
    
    
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<edge>> adj(V);
        adjList(adj,edges);
        
        vector<int> distance(V,INT_MAX);
        distance[src]=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,src});
        while(pq.size()>0){
            int u=pq.top().second;
            pq.pop();
            for(edge i:adj[u]){
                if(distance[i.v]>distance[u]+i.wt){
                    distance[i.v]=distance[u]+i.wt;
                    pq.push({distance[i.v],i.v});
                }
            }
        }
        return distance;
    }
};