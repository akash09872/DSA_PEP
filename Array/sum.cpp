#include<iostream>
using namespace std;
int main(){
    int arr[5]={ 2,3,1,5,4};
    int sum=0;
    for(int i:arr){
        sum+=i;
    }
    cout<<sum;
}