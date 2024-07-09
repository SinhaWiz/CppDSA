#include <bits/stdc++.h>
using namespace std;
void clearLastIbits(int &number,int position){
    int mask = (-1<<position);
     //Left shift operator     
     number  =  number & mask;
}
int main (){
   int number,position ;
   number =15;
   position = 2;
   clearLastIbits(number,position);
   cout<<number<<endl;
   return 0;
 }