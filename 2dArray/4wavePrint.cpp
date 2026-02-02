#include<iostream>
using namespace std;
// wave printing of a 2d array f
void printWave(int arr[][4]){
    int j=0;
    while(j<4){
        if(j%2==0){
            for(int i=0;i<3;i++) cout<<arr[i][j]<<" ";
        }else{
            for(int i=2;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
        j++;
    }
}

int main(){
    int arr[][4]={{4,1,6,2},{8,9,10,3},{1,2,3,5}};
    printWave(arr);
}   