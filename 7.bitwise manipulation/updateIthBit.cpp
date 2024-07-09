#include <bits/stdc++.h>
using namespace std;
void clearIthBit(int &number,int position){
    int mask = ~ (1<<position);
    cout<<mask<<endl;
     //Left shift operator     
     number  =  number & mask;
}
void updateIthBit(int &n , int i , int v){
 int mask;
 clearIthBit(n,i);
  mask =(v<<i);
 cout<<mask<<endl;
 n= n|mask ;
}
int main (){
int number,position,value ;
   cin>>number>>position>>value;
   updateIthBit(number,position,value);
   cout<<number<<endl;
   return 0;
 }