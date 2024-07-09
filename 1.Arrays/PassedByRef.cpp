#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
     arr[2] = 69;
       for(int i = 0 ; i <n ; i++)
    {
          cout<<arr[i]<<"  ";
    }
}
int main(){

    int array[]= {12,236,1234,232,547,23,324};
    int n = sizeof(array)/sizeof(int);
    printArray(array,n);
    for(int i = 0 ; i <n ; i++)
    {
          cout<<array[i]<<"  ";
    }

    return 0;
}