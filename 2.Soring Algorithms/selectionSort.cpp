#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[] , int n ){
for(int i = 0 ;i < n-1 ; i++){
    int current = a[i];
    int min_pos = i;
    for(int j = i ;j<n;j++){
              if(a[j]<a[min_pos])
              {
                min_pos=j;
              }
    }
    swap(a[min_pos],a[i]);
}
}
int main(){
int arr[] = {11,1,3,5,12,2,8,6,9,0,10,7,4};
int n = sizeof(arr)/sizeof(int);
selectionSort(arr,n);

for(auto X : arr)
cout<<X<<"  ";
    return 0;
}