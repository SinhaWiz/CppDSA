#include <bits/stdc++.h>
using namespace std ;
//Optimized method
int PowerOptimized(int a , int n){
if(n == 0){
    return 1;
}
int subProblem = PowerOptimized(a,n/2);
int subProblemSqr = subProblem*subProblem;
if(n&1){
    return a*subProblemSqr;
}
else 
return subProblemSqr;
}
int Power(int a , int n){
if(n == 0){
    return 1;
}
return a*Power(a,n-1);
}
int main(){
int a, n ;
cin>>a>>n;
cout<<Power(a,n)<<endl;
    return 0;
}