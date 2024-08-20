#include <bits/stdc++.h>
using namespace std;
void print2DArray(int n,int m ,int arr[][100]){
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         cout<<arr[i][j]<<"  ";
        }
        cout<<'\n';
    }
}
int main(){
    int arr[100][100];
    int n,m ;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of Columns: ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         cin>>arr[i][j];
        }
    }
   print2DArray(n,m,arr);
    return 0;
}
