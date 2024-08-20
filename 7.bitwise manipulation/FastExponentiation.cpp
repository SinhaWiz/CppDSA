#include <bits/stdc++.h>
using namespace std ;
int fastExpo(int n , int a){
int ans =1;
while(n>0){
    int lastBit = (n & 1);
        if(lastBit)
        {
            ans = ans*a;
        }
            a= a*a;
            n=n>>1;
        }
    return ans;
}
int main(){
int n,a;
cin>>n>>a;
cout<<fastExpo(a,n);
    return 0 ;
}