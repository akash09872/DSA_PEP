#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    string firstRepChar2(string s) {
        int i=0,j=i+1;
        while(j<s.size()){
            while(i<j){
                if(s[i]==s[j]) return to_string(s[i]);
                i++;
            }
            i=0;
            j++;
        }
        return "-1";
    }
    
    string firstRepChar(string s){
        string ans="-";
        vector<int> res(26,0);
        for(char i:s){
            res[i-'a']++;
            if(res[i-'a']>1){
                ans[0]=i;
                return ans;
            }
        }
        return "-1";
    }
};