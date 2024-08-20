#include <bits/stdc++.h>
using namespace std;
int ** create2Darray(int row , int column){
  int **arr = new int*[row];

  for(int i=0 ;i<row ; i++){
      arr[i] = new int [column];
  }
int value = 0;
  for(int i=0 ;i<row ; i++){
    for(int j=0 ;j<column ; j++){
    arr[i][j]= value;
    value++;
    }
  }
  return arr;
}
int main(){
int rows , columns;
cout<<" G G ";
cin>>rows>>columns;
    int ** arr = create2Darray(rows,columns);
 for(int i=0 ;i<rows ; i++){
    for(int j=0 ;j<columns ; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}