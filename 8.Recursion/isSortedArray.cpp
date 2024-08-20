#include <bits/stdc++.h>
using namespace std ;
bool isSorted(int arr[],int n){
  if(n==0 or n==1){
    return true;
  }
  if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
    return true;
  }
  return false;
}
// 2nd method
bool isSorted2(int arr[],int i,int n){
  if(i == n-1){
    return true;
  }
  if(arr[i]<arr[i+1] and isSorted2(arr,i+1,n)){
    return true;
  }
  return false;
}
int main(){
int n ;
int array[] = {12,12};
n= sizeof(array)/sizeof(int);
cout<<isSorted(array,n)<<endl;
cout<<isSorted2(array,0,n);
    return 0;
}
