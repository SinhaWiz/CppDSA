#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int a[] , int n ){
for(int i = 0 ;i < n-1 ; i++){
    for(int j = 0 ;j<n-i-1 ;j++){
           if(a[j]>a[j+1])
           {
            swap(a[j+1],a[j]);
           }
    }
}

}
int main(){
int arr[] = {3,5,1,2,8,6,9,10,7,4};
int n = sizeof(arr)/sizeof(int);
bubbleSort(arr,n);
for(auto X: arr)
cout<<X<<"  ";
    return 0;
}