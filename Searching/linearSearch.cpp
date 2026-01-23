#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k) return k>5?k*2:k/2;
    }
    return -1;
}

int main(){
    int arr[5]={3,1,6,4,2};
    cout<<linearSearch(arr, 5,6);
}