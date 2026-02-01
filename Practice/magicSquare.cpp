#include<iostream>
#include<cmath>
using namespace std;
long long countPerfectSquaresInRange(long long L, long long R) {

    long long res= sqrt(R)-sqrt(L);
    if(sqrt(L)*sqrt(L)==L) res++;
    return res;
}
int main(){
    cout<<countPerfectSquaresInRange(100,200);
}