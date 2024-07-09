#include <bits/stdc++.h>
using namespace std;
int main(){
char a[] = {'a','b','c','0','\0'};
string x ;
// getline(cin,x,'.');
// cout<<x<<endl;
int n;
cin>>n;
cin.get();
vector<string> str ;
while(n--){
    getline(cin, x );
    str.push_back(x);
}
for(string X : str){
   cout<<X<<"\n";
}
    return 0;
}