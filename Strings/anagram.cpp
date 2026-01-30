#include<iostream>
using namespace std;

bool anagram(string s, string t){
    int a=0,b=0;
    if(s.size()!=t.size()) return false;
    for(int i=0;i<s.size();i++){
        a+=s[i];
        b+=t[i];
    }
    return a==b;
}
int main(){
    string s="ggii";
    string t="eekk";
    cout<<anagram(s,t);
}
