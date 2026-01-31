#include<iostream>
using namespace std;

bool binarySearch(int *arr,int size,int key){
    if(size<=0) return false;
    int mid=(size-1)/2;
    if(arr[mid]==key) return true;
    else if(arr[mid]>key) return binarySearch(arr,mid-1,key);
    else return binarySearch(arr+mid+1,size-mid,key);
}
int main(){
    int arr[10]={3,5,7,8,9,12,14,17,20,22};
    cout<<binarySearch(arr,10,22);
}
