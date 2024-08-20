#include <bits/stdc++.h>
using namespace std;
void printSpiralArray(int arr[][100],int n,int m){
 int startRow=0;
 int endRow=n-1;
 int startCol=0;
 int endCol =m-1;
while(startCol<=endCol and startRow<=endRow){
//start row
for(int col = startCol;col<=endCol;col++){
    cout<<arr[startRow][col]<<" ";
}
//end column
for(int row = startRow+1;row<=endRow;row++){
    cout<<arr[row][endCol]<<" ";
}
//end row
for(int col = endCol-1;col>=startCol;col--){
    if(startRow==endRow){
        break;
    }
    cout<<arr[endRow][col]<<" ";
}
//start column
for(int row = endRow-1;row>=startRow;row--){
    if(startCol==endCol){
        break;
    }
    cout<<arr[row][startCol]<<" ";
}
startRow++;
startCol++;
endCol--;
endRow--;
}
}
int main(){
int n,m;
int array [][100]={
{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
  };
  printSpiralArray(array,4,4);
    return 0;
}
