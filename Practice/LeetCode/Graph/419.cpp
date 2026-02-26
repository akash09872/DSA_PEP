// https://leetcode.com/problems/battleships-in-a-board/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid,int &m,int &n){
        if(grid[i][j]=='.') return;
        grid[i][j]='.';
        if(i>0 && grid[i-1][j]=='X') dfs(i-1,j,grid,m,n); //up
        if(j>0 && grid[i][j-1]=='X') dfs(i,j-1,grid,m,n); // left
        if(i<m-1 && grid[i+1][j]=='X') dfs(i+1,j,grid,m,n); //right
        if(j<n-1 && grid[i][j+1]=='X') dfs(i,j+1,grid,m,n);   //down
    }
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    dfs(i,j,board,m,n);
                    count++;
                }
            }
        }
        return count;
    }
};