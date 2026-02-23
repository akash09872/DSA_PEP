#include<iostream>
using namespace std;

void merge(int arr[],int start,int end){
    int mid=(start+end)/2;
    int lengtht1=mid-start+1;
    int length2=end-mid;
    int *arr1=new int[lengtht1];
    int *arr2=new int[length2];
    int k=start;
    for(int i=0;i<lengtht1;i++) arr1[i]=arr[k++];
    for(int i=0;i<length2;i++) arr2[i]=arr[k++];
    //write complete code

    
    delete []arr1;
    delete []arr2;
}

void mergerSort(int arr[],int start,int end){
    if(start<=end) return ;
    int mid=(start+end)/2;
    mergerSort(arr,start,mid);
    mergerSort(arr,mid+1,end);
    merge(arr,start,end);
}

int main(){
    int arr[7]={2,5,1,6,7,3,10};

}