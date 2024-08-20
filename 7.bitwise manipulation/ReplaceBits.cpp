#include <bits/stdc++.h>
using namespace std;
void clearRangedbits(int &n,int i ,int j) {
      int mask;
      mask = (-1<<j+1) |~(-1<<i); //   ((1<<i)-1)  
      n = n & mask ; 
}
void replaceBits(int &n ,int i, int j ,int m){
 clearRangedbits(n,i,j);
 int mask =(m<<i);
 n = n | mask;
}
int main (){
   int number,i,j,m ;
   number =15;
   i= 1;
   j=3;
   m=2;
   replaceBits(number,i,j,m);
   cout<<number<<endl;
   return 0;
 }