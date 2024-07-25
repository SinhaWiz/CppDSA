#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &a , int n ){
for(int i = 0 ;i < n-1 ; i++){
    for(int j = 0 ;j<n-i-1 ;j++){
           if(a[j]>a[j+1])
           {
            swap(a[j+1],a[j]);
           }
    }
}
}
int main(){
    int n ; 
    cin>>n;
    vector<int>x(n,10);
    vector<int>y(n,10);
int start_time = clock();
sort(x.begin(),x.end());
int end_time   = clock();
cout<<  end_time-start_time <<endl;
 start_time = clock();
bubbleSort(y , n );
 end_time   = clock();
cout<< end_time-start_time<<endl;
    return 0;
}