#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    if(size<=1) return true;
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1,size-1);
}
int main(){
    int arr[5] = {1,4,3,4,5};
    cout<<isSorted(arr,5);
}