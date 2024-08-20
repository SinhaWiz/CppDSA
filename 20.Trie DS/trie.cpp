#include<bits/stdc++.h>
#include "trie.h"
using namespace std;
int main (){
   int n;
   vector<vector<int>> arr (n,vector<int>());
 string words[] ={"hello","he","apple","aple","news"};
 Trie t;
 for(auto word : words){
    t.insert(word);
 }
    string key;
    getline(cin,key);
    cout<<t.search(key)<<endl;
    return 0;
}