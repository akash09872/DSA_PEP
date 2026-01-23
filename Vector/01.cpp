#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1 {1,2,4};
    cout<<vec1.at(2)<<endl;
    cout<<"Size: " <<vec1.size()<<endl;
    
    vec1.clear();
    
    cout<<"Size after clearing: "<<vec1.size();
}