#include<iostream>
using namespace std;

bool search(int arr[][4],int key, int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==key) return true;
        }
    }
    return false;
}
int main(){
    int arr[4][4]={{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};
    int key=9;
    cout<<search(arr,9,4,4);
}