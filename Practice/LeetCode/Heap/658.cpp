// // https://leetcode.com/problems/find-k-closest-elements/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++){
            int a=abs(arr[i]-x);
            pq.push({a,arr[i]});
            if(pq.size()>k) pq.pop();
        }
        vector<int> res;
        cout<<pq.size();
        int i=0;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};