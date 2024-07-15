#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &array , int s , int e){
    int pivot = array[e];
    int i =s-1 ;
 for(int j = s ; j < e ; j++)
 {
    if(array[j]<pivot){
        i++;
       swap(array[j],array[i]);
    }
 }
   swap(array[i+1],array[e]);
   return i+1;
}


void Quicksort(vector<int> &arr , int s , int e){
    if(s>=e ){
        return ;
        }
        int  p = partition(arr , s, e);
        Quicksort(arr,s,p-1);
        Quicksort(arr,p+1,e);
    
}


int main(){
vector<int> arr{-5,4,3,2,1,4,5,6,9,11,10,-3};
int s = 0 ;
int e = arr.size()-1;
Quicksort(arr,s,e);
for(int x: arr){
    cout<< x << "  ";
}

    return 0;
}