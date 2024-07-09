#include <bits/stdc++.h>
using namespace std;
//FAST but Works for Sorted Arrays
//Time Complexity Logbase2(N)
int binarySearch(int arr[],int n , int number){
    int start = 0;
    int end = n-1;
      while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]== number)
         {return mid;}
        else if(number>arr[mid]){
            start =mid+1;
        }
        else if(number<arr[mid]){
          end= mid - 1;
        }
      }
      return -1;
}
int main(){
    int number ;
    cout<<"Enter your number : ";
    cin>>number;
    int array[]= {45,66,88,89,99,112,134};
    int n = sizeof(array)/sizeof(int);
    int index = binarySearch(array,n,number);
    if(index!=-1)
    {cout<<"Found at index "<<index;}
    else
       cout<<"Not Found";
    return 0;
}