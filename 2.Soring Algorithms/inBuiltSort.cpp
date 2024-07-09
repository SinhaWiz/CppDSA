#include <bits/stdc++.h>
#include <algorithm>
#include <functional>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
int arr[] = {11,1,3,5,12,2,8,6,9,0,10,7,4,20,26,14,15,19,0,0};
int n = sizeof(arr)/sizeof(int);

// sort(arr,arr+n);
// //using comparator
// sort(arr,arr+n,compare);
// reverse(arr,arr+n);
sort(arr,arr+n,greater<int>());
for(auto X : arr)
cout<<X<<"  ";
    return 0;
}