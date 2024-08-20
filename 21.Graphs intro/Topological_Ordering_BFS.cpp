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
        //undirection must be false for topological ordering because it follow (DAG) Directed Assyclic Graph
    void addEdge(int i , int j , bool undir = false){
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
    void dfsHelper(int node , bool * visited){
        visited[node] = true;
        cout<<node<<"-->";
        for(int nbr : l[node]){
            if(!visited[nbr]){
                dfsHelper(nbr,visited);
            }
        }
        return;
    }
    void dfs(int source){
        bool *visited = new bool[v]{0};
        dfsHelper(source,visited);
    }
    void topological_sort(){
        vector<int> indegree(v,0);
        for(int i =0 ; i<v;i++){
            for(auto nbr : l[i]){
                indegree[nbr]++;
            }
        }
    //bfs kinda method now
            queue<int> q;
            for(int i=0;i<v;i++){
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            while(!q.empty()){
                int node =q.front();
                cout<<node <<" ";
                q.pop();
                //iterate over the nbrs and reduce their factor by 1
                 for(auto nbr : l[node]){
                    indegree[nbr]--;
                    if(indegree[nbr]==0){
                        q.push(nbr);
                    }
            }
        }
    }
};
int main(){
Graph g(6);
g.addEdge(0,2);
g.addEdge(2,3);
g.addEdge(3,5);
g.addEdge(4,5);
g.addEdge(1,4);
g.addEdge(1,2);
g.topological_sort();
    return 0;
}