#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
        // ^
        // '
    // asks for n after compilation which leads to shortage of memory in stack memory

    int arr[5]={2,31,34,4,2};
    cout<<"Reversed: ";
    for(int i=4;i>=0;i--){
        cout << i[arr] << " ";
    }
    cout<<endl;
    
    cout<<"Doubled: ";
    for(int i: arr){
        cout<<i*2<<" ";
    }
    cout<<endl;

}