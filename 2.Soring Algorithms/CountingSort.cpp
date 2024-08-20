#include <bits/stdc++.h>
using namespace std;
void CountingSort(int a[] , int n ){
int largest = 0;
for(int i = 0 ;i<n; i++)
{
    largest = max(largest,a[i]);
}
vector<int> count(largest+1,0);

for(int i = 0 ;i<n; i++)
{
    count[a[i]]++;
}
int j = 0;
for(int i = 0 ;i <=largest ; i++){
    while(count[i]>0)
    {
        a[j]= i;
        count[i]--;
        j++;
    }    
}

}
int main(){
int arr[] = {3,5,1,2,8,6,9,10,7,4};
int n = sizeof(arr)/sizeof(int);
CountingSort(arr,n);
for(auto X: arr)
cout<<X<<"  ";
    return 0;
}
