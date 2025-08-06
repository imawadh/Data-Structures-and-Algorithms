#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph; // vector of list to store neighbour of all the elements present in the graph where each 'i'th index corrosponds to 'i'th element of the graph 

void insert(int sr, int ds, bool dir){
    graph[sr].push_back(ds);
    if(dir){
        graph[ds].push_back(sr);
    }
}

void print(){
    cout<<"Printing the Adjacency List of Graph :: \n";
    int n = graph.size();
    for(int i =0; i<n; i++){
        cout<<i<<" :  ";
        for(auto it : graph[i]){
            cout<<it<<' ';
        }
        cout<<endl;
    }

}


int main(){
    int v;// Number of vertices 
    cin>>v;
    graph.resize(v,list<int>());

    int e; // Number of edges 
    cin>>e;
    while(e--){
        
        int sr,ds;
        bool dir;  
        // Source, destination, direction --> true if it is bi-directional
        cin>>sr>>ds>>dir;

        insert(sr,ds,dir);

    }
    print();

    return 0;
}