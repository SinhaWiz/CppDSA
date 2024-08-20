#include <bits/stdc++.h>
using namespace std;
int Fibonacci_BtT1(int n){
    int array[n+1] ={0};
    array[1]=1;
   
    for(int i = 2 ; i<=n ;i++){
        array[i] = array[i-1]+array[i-2];
        
    }
    return array[n];
}
int Fibonacci_BtT2(int n){
    int a = 0;
    int b = 1;
    int c = 0;
    if(n==0 or n==1){
        return n;
    }  
    for(int i = 2 ; i<=n ;i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
int n;
cin>>n;
cout<<Fibonacci_BtT2(n);
    return 0;
}