#include <bits/stdc++.h>
using namespace std;
class Graph{
    list<int>*l;
    int v;
    
public:
    Graph(int v){
        this->v = v;
        l = new list<int>[v];    
        }
    void addEdge(int i , int j , bool undir = true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
        }
    void printAdjList(){
        for(int i=0 ; i <v ;i++){
            cout<<i<<"-->";
            for(auto node : l[i]){
                cout<< node<<" , ";
            }
            cout<<endl;
        }
    }
};
int main(){
Graph g(6);
g.addEdge(0,1);
g.addEdge(0,4);
g.addEdge(2,1);
g.addEdge(3,4);
g.addEdge(4,5);
g.addEdge(2,3);
g.addEdge(3,5);
g.printAdjList();
    return 0;
}