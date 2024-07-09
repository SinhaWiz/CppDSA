#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[] , int n ){
for(int i = 0 ;i < n-1 ; i++){
    int current = a[i+1];
    int previous = i;
    while(previous>=0 and a[previous]>current)
    {
        a[previous+1]= a[previous];
             previous--;
    }
    a[previous+1]=current;
}
}
int main(){
int arr[] = {11,1,3,5,12,2,8,6,9,0,10,7,4};
int n = sizeof(arr)/sizeof(int);
insertionSort(arr,n);
for(auto X : arr)
cout<<X<<"  ";
    return 0;
}