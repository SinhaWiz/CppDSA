#include <bits/stdc++.h>
using namespace std;
int main(){
int n=50; 
int *arr = new int [n];
for(int  i = 1 ;i<= n-1 ;i++){
  arr[i]= i ;
  cout<<arr[i]<<" , ";
}
arr [n]= n;
cout<<arr[n];
delete [] arr ;
  return 0;
}