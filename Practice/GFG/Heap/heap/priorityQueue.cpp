#include<bits/stdc++.h>
using namespace std;
using namespace std;
// https://www.geeksforgeeks.org/problems/k-largest-elements4206/1

class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int, vector<int> ,greater<int>> pq;
        for(int i:arr){
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
        vector<int> res(k);
        int i=k-1;
        while(!pq.empty() && i>=0){
            res[i--]=pq.top();
            pq.pop();
        }
        
        return res;
    }
};




// https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<k+1;i++) pq.push(arr[i]);
        
        for(int i=0;i<n;i++){
            if(i+k+1 < n) pq.push(arr[i+k+1]);
            arr[i]=pq.top();
            pq.pop();
        }
    }
};