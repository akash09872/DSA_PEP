#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
//index of row which has maximum sum;
int maxRowIdx(int arr[][4]){
    int arr[][4]={{4,1,6,2},{8,9,10,3},{1,2,3,5}};
    int maxSum=INT_MIN;
    int maxI=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++) sum+=arr[i][j];
        if(sum>maxSum){
            maxSum=sum;
            maxI=i;
        }
    }
    return maxI;
}

// index of columns which has maximum columns
int maxColIdx(int arr[][4]){
    int maxSum=INT_MIN;
    int maxCol=-1;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++) sum+=arr[j][i];
        if(sum>maxSum){
            maxSum=sum;
            maxCol=i;
        }
    }
    return maxCol;
}


int main(){
    int arr[][4]={{4,1,6,2},{8,9,10,3},{1,2,3,5}};
    cout<<maxColIdx<<
}