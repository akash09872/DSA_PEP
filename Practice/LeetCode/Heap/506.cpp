// https://leetcode.com/problems/relative-ranks/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        int n=score.size();
        vector<string> rank(n);
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        if(n>0){
            rank[pq.top().second]="Gold Medal";
            pq.pop();
        }
        if(n>1){
            rank[pq.top().second]="Silver Medal";
            pq.pop();
        }
        if(n>2){
            rank[pq.top().second]="Bronze Medal";
            pq.pop();
        }
        int r=4;
        while(!pq.empty()){
            int i=pq.top().second;
            rank[i]=to_string(r);
            r++;
            pq.pop();
        }
        return rank;
        
    }
};