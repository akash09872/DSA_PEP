#include<iostream>
using namespace std;

// ---PRINT EVEN------//
void printEven(int n){
    if(n<=1) return;
    if(n%2==0) {
        printEven(n-2);
        cout<<n<<" ";
    }
    else printEven(n-1);
}
int main(){
    printEven(21);
}