#include <bits/stdc++.h>
using namespace std;
int rotatedSearch(vector<int>&a , int key){
int n= a.size();
int s= 0 ;
int e= n-1;
while(s<=e){
    int mid = (s+e)/2;
    if(a[mid]==key){
        return mid;
    }
    if(a[s]<=a[mid]){
        if(key>=a[s] and key<=a[mid]){
            e=mid-1 ;
        }
        else {
            s=mid+1;
        }
    }
    else{
        if( key>=a[mid] and key<=a[e] ){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}
return -1;
}
int main(){
vector<int> arr{-5,4,3,2,1,4,5,6,9,11,10,-3};
int key =-3;
int s = 0 ;
int e = arr.size()-1;
cout<<rotatedSearch(arr , key);


    return 0;
}