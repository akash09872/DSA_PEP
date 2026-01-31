#include<iostream>
using namespace std;
int partition(int *arr,int start, int end){
    //taking pivot as first element;
    int pivot=start;
    // counting the elements less than pivot
    int count=0;
    for(int i=pivot+1;i<=end;i++){
        if(arr[i]<arr[pivot]) count++;
    }
    //swapping the pivot to it's correct position
    swap(arr[pivot],arr[count]);
    pivot=count;
    int i=0,j=pivot+1;
    //partitioning the array into two parts, smaller than pivot to left and greater will be on right
    while(j<=end){
        if(arr[j]<arr[pivot]) swap(arr[j],arr[i++]); //if comparing with i we use >= we need to define where elements equal to pivot will lie; 
        else j++;
    }
    return pivot;
}
void quickSort(int *arr,int start,int end){
    if(start>=end) return;
    //callign partition function to divide array 
    int pivot=partition(arr,start,end);
    //calling the function again to left part and right part ;
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}


int main(){
    int arr[]={34,4,5,3,43,5,6,6,22,10};
    quickSort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}