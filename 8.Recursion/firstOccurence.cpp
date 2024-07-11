#include <bits/stdc++.h>
using namespace std ;
int firstOccur(int arr[] , int n, int key){
if(n == 0){
    return -1;
}
if(arr[0] == key)
{
    return 0;
}
int subArray = firstOccur(arr + 1 , n-1,  key);
if( subArray != -1)
 {
    return 1+subArray;
 }
 return -1;
}
int main(){
int key , n ;
int  arr[50] = {23,45,67,12,32,76,86,43,42,90};
n = sizeof(arr)/sizeof(int);
key = 42;
cout<<firstOccur(arr , n , key) <<endl;
    return 0;
}