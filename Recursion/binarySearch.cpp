#include<iostream>
using namespace std;

bool binarySearch(int *arr,int size,int key){
    if(size==0) return false;
    int mid=(size-1)/2;
    if(arr[mid]==key) return true;
    else if(arr[mid]>key) return binarySearch(arr,mid-1,key);
    else return binarySearch(arr+mid+1,size-mid,key);
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<binarySearch(arr,5,5);
}
