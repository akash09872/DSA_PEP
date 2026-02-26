// https://leetcode.com/problems/course-schedule/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indeg(numCourses,0);
        for(auto i:prerequisites){
            int v=i[1];
            int u=i[0];
            adj[u].push_back(v);
            indeg[v]++;
        }
        vector<int> res;
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0) q.push(i);
        }
        while(!q.empty()){
            int k=q.front();
            res.push_back(k);
            for(int i:adj[k]){
                indeg[i]--;
                if(indeg[i]==0) q.push(i);
            }
            q.pop();
        }
        if(res.size()!=numCourses) return false;
        return true;
    }
};