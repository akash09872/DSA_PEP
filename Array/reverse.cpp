#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int k=a;
    a=b;
    b=k;
}
int main(){
    int arr[5]={1, 3 , 5 , 6 ,7};
    int i=0;
    while(i<5/2){
        swap(arr[i],arr[4-i]);
        i++;
    }
    for(int i:arr){
        cout<<i<<" ";
    }
}