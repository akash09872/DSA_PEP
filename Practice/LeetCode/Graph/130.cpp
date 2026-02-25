// https://leetcode.com/problems/surrounded-regions/description/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void visit(int i,int j,int &m,int &n,vector<vector<bool>> &vis,vector<vector<char>>& board){
        vis[i][j]=true;
            if(i>0 && board[i-1][j]=='O' && !vis[i-1][j]) visit(i-1,j,m,n,vis,board);
            if(i<m-1 && board[i+1][j]=='O' && !vis[i+1][j]) visit(i+1,j,m,n,vis,board);
        if(j>0) if(board[i][j-1]=='O' && !vis[i][j-1]) visit(i,j-1,m,n,vis,board);
            if(j<n-1 && board[i][j+1]=='O' && !vis[i][j+1]) visit(i,j+1,m,n,vis,board);
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        //top row
        for(int i=0;i<n;i++){
            if(board[0][i]=='O' && !vis[0][i]){
                visit(0,i,m,n,vis,board);
            }
        }
        for(int i=0;i<m;i++){//right
            if(board[i][n-1]=='O' && !vis[i][n-1]){
                visit(i,n-1,m,n,vis,board);
            }
        }
        for(int i=0;i<n;i++){ //bottom
            if(board[m-1][i]=='O' && !vis[m-1][i]){
                visit(m-1,i,m,n,vis,board);
            }
        }
        for(int i=0;i<m;i++){//left
            if(board[i][0]=='O' && !vis[i][0]){
                visit(i,0,m,n,vis,board);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};