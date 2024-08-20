#include <bits/stdc++.h>
using namespace std;
class Graph{
    
    int v;
    
public:
list<pair<int,int>>*l;
    Graph(int v){
        this->v = v;
        l = new list<pair<int,int>>[v];    
        }
    void addEdge(int i , int j , int weight ,bool undir = true){
        l[i].push_back({weight,j});
        if(undir){
            l[j].push_back({weight,i});
        }
        }
    int dijkstra(int src , int dest){
        vector<int> dist(v,INT_MAX);
        set<pair<int,int>> s;
        //l.init
        dist[src] = 0;
        s.insert({0,src});
        while(!s.empty()){
            auto it =s.begin();
            int node =it->second;
            int DistTillNow=it->first;
            s.erase(it);//pop
            //Iterate over the neighbours of the node
            for(auto nbrPair : l[node])
            {
                int nbr = nbrPair.second;
                int currentEdge= nbrPair.first;
                if(DistTillNow + currentEdge <dist[nbr]){
                    //remove if nbr already exist in the set
                    auto f = s.find({dist[nbr],nbr});
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dist[nbr] = DistTillNow+ currentEdge;
                    s.insert({dist[nbr],nbr});
                }
            }
            
        }
        //single source shortest Dist to all other nodes
        for(int i = 0 ;i< v ;i++){
           cout<<"Node : "<<i <<"   Distance :  "<<dist[i]<<endl;
        }
        return dist[dest];
    }
};
int main(){
Graph g(5);
g.addEdge(0,1,1);
g.addEdge(1,2,1);
g.addEdge(0,2,4);
g.addEdge(0,3,7);
g.addEdge(3,2,2);
g.addEdge(3,4,3);
cout<<g.dijkstra(0,4)<<endl;
    return 0;
}