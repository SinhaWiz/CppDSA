#include <bits/stdc++.h>
using namespace std ;
int lastOccur(int arr[] , int n, int key){
if(n == 0){
    return -1;
}

int subIndex = lastOccur(arr + 1 , n-1,  key);
if( subIndex == -1)
 {
    if(arr[0]==key)
    return 0 ; 
    else
    return -1;
 }
 else
 return subIndex+1;
}
int main(){
int key , n ;
int  arr[50] = {23,45,42,67,12,32,76,86,43,42,90};
n = sizeof(arr)/sizeof(int);
key = 42;
cout<<lastOccur(arr , n , key) <<endl;
    return 0;
}