#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int key){
    int start=0,mid,end=size-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key) return mid;
        else if(key>mid) start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main(){
    int arr[9]={2,4,5,7,8,10,12,15,20};
    cout<<binarySearch(arr,9,15);
}