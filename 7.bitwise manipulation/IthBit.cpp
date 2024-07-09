#include <bits/stdc++.h>
using namespace std;
int getIthBit(int number,int pos){
    int mask =1<<pos; //Left shift operator
return (number& mask)>0?1 :0;
}
int main (){
   int number,pos ;
   cin>>number>>pos;
   cout<<getIthBit(number,pos)<<endl;
 }