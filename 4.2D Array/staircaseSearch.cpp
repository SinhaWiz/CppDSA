#include <bits/stdc++.h>
using namespace std;
pair <int ,int> staircaseSearch(int arr[][100],int n,int m,int key){
if(key<arr[0][0] or key>arr[n-1][m-1])
return {-1,-1};
int  i = 0;
int j=m-1;
while(i<=n-1 and j>=0)
 {     //cout<<"i: "<<i<<"   j: "<<j<<endl;//this is how the stair works
    if(arr[i][j]==key){
        return {i,j};
    }
    else if(arr[i][j]<key){
           i++;
    }
    else
    j--;
}
return {-1,-1};
}
int main(){
int n,m,key;
cout<<"input:";
cin>>key;
int array [][100]={
{11,22,31,44},
{50,66,71,84},
{91,101,112,123},
{136,140,151,162}
  };
  
  pair<int,int> gg=staircaseSearch(array,4,4,key);
  cout<<" FINAL ::"<<gg.first<< "  "<<gg.second;
    return 0;
}
