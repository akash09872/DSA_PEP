// https://leetcode.com/problems/max-area-of-island/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i,int j,vector<vector<bool>> &vis,vector<vector<int>> &grid,int &m,int &n,int &area){
        if(vis[i][j] || grid[i][j]!=1) return;
        vis[i][j]=true;
        area++;
        if(i>0 && grid[i-1][j]) dfs(i-1,j,vis,grid,m,n,area); //up
        if(j>0 && grid[i][j-1]) dfs(i,j-1,vis,grid,m,n,area); // left
        if(i<m-1 && grid[i+1][j]) dfs(i+1,j,vis,grid,m,n,area); //right
        if(j<n-1 && grid[i][j+1]) dfs(i,j+1,vis,grid,m,n,area);   //down
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int column=grid[0].size();
        vector<vector<bool>> vis(rows,vector<bool>(column,false));
        int maxArea=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<column;j++){
                int area=0;
                if(!vis[i][j] && grid[i][j]){
                    dfs(i,j,vis,grid,rows,column,area);
                    if(area>maxArea) maxArea=area;
                }
            }
        }
        return maxArea;
    }
};