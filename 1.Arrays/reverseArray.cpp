#include <bits/stdc++.h>
using namespace std;
//Time Complexity O(N)
int reverseArray(int arr[],int n ){
    int start = 0;
    int end = n-1;
      while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
      }
}
int main(){
    int number ;
    int array[10]= {45,66,88,89,99,112,134};
    int n = sizeof(array)/sizeof(int);
    for(int i = 0 ;i <n ;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int index = reverseArray(array,n);
    for(int i = 0 ;i <n ;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}