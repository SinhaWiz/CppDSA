#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &array , int start , int end){
int i = start ;
int m =(start+end)/2;
int j = m+1 ;
vector<int>temp;
while( i <= m and j<=end )
{
    if (array[i]<array[j])
    {
        temp.push_back(array[i]);
        i++;
    }
    else{
        temp.push_back(array[j]);
        j++;
    }
}
    while(i<=m){
        temp.push_back(array[i++]);
}
    while(j<=end){
        temp.push_back(array[j++]);
}
    int k = 0 ;
    for(int index = start ; index<= end;index++ ){
       array [ index ]= temp [k++];
    }
    return ;
}
void mergesort(vector<int> &arr , int start , int end){
    if(start>=end ){
        return ;
        }
    int mid  = (start+end )/2;
    mergesort(arr , start , mid);
    mergesort(arr , mid+1 , end);
    return merge(arr , start , end);
}
int main(){
vector<int> arr{-5,4,3,2,1,4,5,6,9,11,10,-3};
int s = 0 ;
int e = arr.size()-1;
mergesort(arr,s,e);
for(int x: arr){
    cout<< x << "  ";
}

    return 0;
}