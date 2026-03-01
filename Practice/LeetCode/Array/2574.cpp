// leetcode.com/problems/left-and-right-sum-differences

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> suffix(n+1);
        suffix[n]=0;
        int a=0;
        for(int i=n-1;i>=0;i--){
            a+=nums[i];
            suffix[i]=a;
        }
        a=0;
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(abs(a-suffix[i+1]));
            a+=nums[i];
        }
        return res;
    }
};