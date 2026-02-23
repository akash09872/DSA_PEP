// https://leetcode.com/problems/top-k-frequent-elements/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums){
            if(mp[i]) mp[i]++;
            else mp[i]=1;
        }
        unordered_map<int,int> m;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;

    }
};