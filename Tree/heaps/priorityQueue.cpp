/*
    Priority queue is a special type of queue where elements are accessed on basis of priority, not the insertion order
    >> By default it has highest element priority
    >> Internally it is implemented using heap (CBT) and max heap by default (largest element will be always on top).

*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main(){
    //MAx heap
    priority_queue<int> pq;


    priority_queue<int, vector<int>, greater<int>> mpq;
    vector<int> a;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
        pq.em
    }
    
}