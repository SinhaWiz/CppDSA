#include <bits/stdc++.h>
using namespace std;
//Time Complexity Log(N)
int searchArray(int arr[],int n , int number){
      for(int i = 0 ; i< n ; i++)
      {
        if(arr[i]==number)
        return i ;
       
      }
      return -1;
}
int main(){
    int number = 2;
    int array[]= {236,1234,232,547,23,324,1278,123,12,45,57,3453};
    int n = sizeof(array)/sizeof(int);
    int index = searchArray(array,n,number);
    if(index!=-1)
    {cout<<"Found at index "<<index;}
    else
       cout<<"Not Found";
    return 0;
}