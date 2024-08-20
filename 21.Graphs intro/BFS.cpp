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
    void bfs(int source){
        queue<int> q;
        bool * visited = new bool[v]{0};
        q.push(source);
        visited[source] =true;
        while(!q.empty()){
            int f = q.front();
            cout<<f<<endl;
            q.pop();
            for(auto nbr : l[f]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]= true;
                }
            }
       }
    }
};
int main(){
Graph g(7);
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(3,5);
g.addEdge(5,6);
g.addEdge(4,5);
g.addEdge(0,4);
g.addEdge(3,4);
g.bfs(1);
    return 0;
}