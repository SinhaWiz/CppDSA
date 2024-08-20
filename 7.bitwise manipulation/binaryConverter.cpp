#include <bits/stdc++.h>
using namespace std;
int binaryConverter(int &n){
     int ans = 0;
     int p = 1;
     while(n>0){
        int lastbit = (n&1);
        ans  += lastbit*p;
        p=p*10;
        n=n>>1;
     }
     return ans;
}
int main (){
    int n;
   cin>>n;
    cout<<binaryConverter(n)<<endl;
     return 0 ;
 }