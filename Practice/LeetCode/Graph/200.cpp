// https://leetcode.com/problems/number-of-islands/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i,int j,vector<vector<bool>> &vis,vector<vector<char>> &grid,int &m,int &n){
        if(vis[i][j] || grid[i][j]!='1') return;
        vis[i][j]=true;
        if(i>0 && grid[i-1][j]=='1') dfs(i-1,j,vis,grid,m,n); //up
        if(j>0 && grid[i][j-1]=='1') dfs(i,j-1,vis,grid,m,n); // left
        if(i<m-1 && grid[i+1][j]=='1') dfs(i+1,j,vis,grid,m,n); //right
        if(j<n-1 && grid[i][j+1]=='1') dfs(i,j+1,vis,grid,m,n);   //down
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int column=grid[0].size();
        cout<<rows<<" "<<column;
        vector<vector<bool>> vis(rows,vector<bool>(column,false));
        int count=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<column;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,vis,grid,rows,column);
                    count++;
                }
            }
        }
        return count;
    }
};