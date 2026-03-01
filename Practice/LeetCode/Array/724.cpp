// leetcode.com/problems/find-pivot-index/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> suffix(n+1);
        suffix[n]=0;
        int a=0;
        for(int i=n-1;i>=0;i--){
            a+=nums[i];
            suffix[i]=a;
        }
        a=0;
        for(int i=0;i<n;i++){
            if(a==suffix[i+1]) return i;
            a+=nums[i];
        }
        return -1;
        
    }
};