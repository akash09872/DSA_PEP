#include<iostream>
#include<vector>
using namespace std;
string removeDuplicate(string s){
    vector<bool> visited(256, false);
    string res="";
    for(int i:s){
        if(!visited[i]){
            visited[i]=true;
            res.push_back(i);
        }
    }
    return res;
}
int main(){
    string s="banana";
    cout<< removeDuplicate(s);
}