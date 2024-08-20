#include <bits/stdc++.h>
using namespace std;
int main(){
    char ArraYc [][100] = {
        "How I met your mother",
        "Breaking Bad",
        "Better call saul",
        "House of the Dragon",
        "The Big Bang Theory",
        "Young Sheldon",
        "Berlin",
        "Money Heist",
        "Loki",
        "Dark",
        "Dark Matter"

    };//inititalizing with columns is mandatory
    int n= (sizeof(ArraYc)/sizeof(ArraYc[0]));
    cout<<n<<endl;
    for(int i=0 ; i<n ; i++){
    cout<<ArraYc[i] <<endl;
    }
    cout<<ArraYc[6]<<endl;
    cout<<ArraYc[3][13]<<endl;
    return 0;
}
