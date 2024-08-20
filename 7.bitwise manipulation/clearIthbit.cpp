#include <bits/stdc++.h>
using namespace std;
void clearIthBit(int &number,int position){
    int mask = ~ (1<<position);
     //Left shift operator     
     number  =  number & mask;
}
int main (){
   int number,position ;
   cin>>number>>position;
   clearIthBit(number,position);
   cout<<number<<endl;
   return 0;
 }