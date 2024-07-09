#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[100000];
    int arr2[100000];
    int n,r;
    
cin>>n >>r ;
for(int i = 0 ; i< n; i++){
cin>>array[i];
}
int j=0;
for(int i = 0 ; i< n; i++){
   if(i+r<n){
    arr2[i]=array[i+r];
   }
   else{ 
   arr2[i]=array[j];
      j++;
   }
  
}
for(int i = 0; i < n ;i++){
    cout<<arr2[i];
}
    return 0;
}