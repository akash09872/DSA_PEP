// leetcode.com/problems/number-of-provinces


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i,vector<vector<int>>& isConnected,vector<bool> &vis){
        vis[i]=true;
        for(int j=0;j<isConnected.size();j++){
            if(!vis[j] && isConnected[i][j]==1){
                dfs(j,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        int count=0;
        vector<bool> vis(v,false);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                count++;
                dfs(i,isConnected,vis);
            }
        }
        return count;
    }
};