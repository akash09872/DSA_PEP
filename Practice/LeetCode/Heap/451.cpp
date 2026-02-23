#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char a:s){
            mp[a]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string res="";
        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                res+=pq.top().second;
            }
            pq.pop();
        }
        return res;
    }
};