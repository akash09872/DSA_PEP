
#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<vector<int>> &adj) {
    // code here
    queue<int> q;
    int v=adj.size();
    vector<int> ans;
    vector<bool> vis(v,false);
    q.push(0);
    vis[0]=true;
    while(!q.empty()){
        int k=q.front();
        ans.push_back(k);
        q.pop();
        for(int i:adj[k]){
            if(!vis[i]) {
                q.push(i);
                vis[i]=true;
            }
        }
    }
    return ans;
}