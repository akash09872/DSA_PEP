// https://leetcode.com/problems/flood-fill/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& image,int color, int newColor){
        int m=image.size();
        int n=image[0].size();
        if(i<0 || j<0 || i>=m  || j>=n) return;
        if(image[i][j]==newColor || image[i][j]!=color) return;
        image[i][j]=newColor;
        dfs(i-1,j,image,color,newColor);
        dfs(i,j-1,image,color,newColor);
        dfs(i+1,j,image,color,newColor);
        dfs(i,j+1,image,color,newColor);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int c=image[sr][sc];
        dfs(sr,sc,image,c,color);
        return image;
    }
};