#include <bits/stdc++.h>
using namespace std;

bool isSafe(int mat[][9] , int i , int j , int no , int n){
  for(int )
}

bool solveSudoku(int mat[][9], int i, int j, int n){
  if(i==n){
    return true;
  }
  if (j==n){
    return solveSudoku(mat,i+1,0,n);
  }
  if(mat[i][j]!=0){
    return solveSudoku(mat,i,j+1,n);
  }
  for(int  no= 1 ; no<=n ; no++){
         if(isSafe(mat,i,j,no,n)){
            mat[i][j]=no;
            bool solveSubProblem = solveSubProblem(mat,i,j+1,n);
            if(solveSubProblem){
               return  true;
            }
         }
  }
  mat[i][j] = 0;
  return false;
  
}

int main() {
    
    return 0;
}
