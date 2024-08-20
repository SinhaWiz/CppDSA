#include <bits/stdc++.h>
using namespace std;
int Fibonacci_TtB(int n,int a[]){
    if(n==0 or n==1){
    return n;
    }
    if(a[n]!=0){
        return a[n];
    }
    return a[n] = Fibonacci_TtB(n-1,a)+Fibonacci_TtB(n-2,a);
}

int main(){
int n;
cin>>n;
int arr[n+1]={0};
for(int i = 0 ; i<=n ; i++){
cout<<Fibonacci_TtB(i,arr)<< "   ";
}
    return 0;
}