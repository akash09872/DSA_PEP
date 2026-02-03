#include<iostream>
using namespace std;
void spiralPrint(int arr[][4]){
    int topRow=0,bottomRow=2;
    int leftCol=0,rightCol=3;
    while(topRow<=bottomRow && leftCol<=rightCol){
        for(int i=leftCol;i<=rightCol;i++) cout<<arr[topRow][i]<<" ";
        topRow++;
        for(int i=topRow;i<=bottomRow;i++) cout<<arr[i][rightCol]<<" ";
        rightCol--;
        for(int i=rightCol;i>=leftCol;i--) cout<<arr[bottomRow][i]<<" ";
        bottomRow--;
        for(int i=bottomRow;i>=topRow;i--) cout<<arr[i][leftCol]<<" ";
        leftCol++;
    }
}

int main(){

    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        // int arr[][4]={{1,2,3},{4,5,6},{7,8,9}};

        // {1,2,3}
        // ,{4,5,6},
        // {7,8,9}



    // {1,2,3,4}
    // {5,6,7,8}
    // {9,10,11,12}
    // {13,14,15,16}
    spiralPrint(arr);
}