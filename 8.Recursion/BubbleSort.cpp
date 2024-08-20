#include <bits/stdc++.h>
using namespace std ;
//Optimized method
void BubbleSort(int a[] , int n){
    if(n == 1)
    {
        return ;
    }
    for(int j = 0 ;j< n-1; j++)
    {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
BubbleSort(a , n-1);
}
void BubbleSort2(int a[] , int n,int j){
    if(n == 1)
    {
        return ;
    }
    if( j == n-1)
    {
    BubbleSort2(a , n-1 , 0);
    return;
    }
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        }  
BubbleSort2(a , n, j+1);
}
int main(){
int array [] = {-6,-1,10,-9,11,6,2,4,-3,0,8,7,-2,-2,-4};
int n= sizeof(array)/sizeof(int);
BubbleSort2(array,n,0);
for(int i = 0 ;i<n ;i++)
cout<<array[i] <<" ";
    return 0;
}