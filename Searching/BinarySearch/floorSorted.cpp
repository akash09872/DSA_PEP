#include<iostream>
using namespace std;
int findFloor(int* arr, int n, int x) {
    int start=0;
    int end=n-1;
    int mid;
    int ans=-1;
    while(start!=end){
        mid=(start+end)/2;
        if(arr[mid]==x){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<x){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}


int main(){
    int arr[7]={1, 2, 8, 10, 10, 12, 19};
    cout<<findFloor(arr,7,5);
}