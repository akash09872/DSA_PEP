#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        if(k<i[arr]) k=i[arr];
    }
    return k;
}
int getSecondLargest(int *arr, int n) {
    // Code Here
    int l=-1;
    int sl=-1;
    for(int i=0;i<n;i++){
        if(l<arr[i]) {
            sl=l;
            l=arr[i];
            
        }else if(arr[i]>sl && arr[i] <l) {
            sl=arr[i];
        }
    }
    return sl;
}

int main(){
    int arr[5]={1,8,56,90,7};
    cout<<largest(arr,5)<<endl;
    cout<<getSecondLargest(arr,5);

}