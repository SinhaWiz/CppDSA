#include <bits/stdc++.h>
using namespace std;
void printPairs(int arr[],int n ){
    cout<<"{";
    for(int i = 0 ;i< n ; i++)
    {
        for(int j=i+1 ; j<n; j++)
        {
            cout<<"(" <<arr[i] <<","<< arr[j]<< ")  ";
        }
    }
    cout<<"}";
}
int main(){
    int array[]= {45,66,88,89,99,112,134};
    int n = sizeof(array)/sizeof(int);
    printPairs(array,n);
    return 0;
}