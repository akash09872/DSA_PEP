#include<iostream>
using namespace std;

bool isPalindrom(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

string removeDuplicates(string s){
    int i=0,j=s.size();
    while(i<s.size()-1){
        if(s[i]==s[j]) s.erase(j,1);
        j--;
        if(j==i){
            i++;
            j=s.size()-1;
        }
    }
    return s;
}

int main(){
    string str="Hello";
    string str2="hello";
    // cout<<str.compare(str2);
    int i=0,j=str.size()-1;
    while (i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<isPalindrom("noon")<<endl;
    cout<<removeDuplicates("lavaav")<<endl;

    
    // cout<<str;
}