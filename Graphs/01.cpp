/*
    A graph G=(V,E) consist of:
    V-> Set of Vertices (nodes);
    E-> Set of Edges connecting pairs of vertices
    
     ~ Directed Graph -> edges have direction
     ~ Undirected Graph -> Non directional edges
     ~ Weighted -> edges have values (weight/ cost /distance)
     ~ Unweighted
    
    Path -> A sequence of vertices connected edges
     ~ Cycle -> Path that start and end at the same vertex

    Degree -> In undirected graphs -> number of edges connected to a vertex in directed graphs ->
            ~ In degree -> Incoming Edges
            ~ OutDegree -> Outgoing edges

    Representation -> 
            Adjacency Matrix
            Adjacency List
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,vector<int>> adjList;
    int n; //Number of vertices
    int m; //Number of edges
    cout<< "Enter the number of vertices: ";
    cin>> n;
    cout<< "Enter the number of edges: ";
    cin>>m;
    cout<<"Enter u_v:"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >>v ;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout<<" Adjacency List -> "<<endl;
    for(auto it:adjList){
        cout<<it.first<<": ";
        for(int i :it.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}