#include <bits/stdc++.h>
using namespace std;
void setIthBit(int &number,int pos){
   int mask = 1<<pos;
    number= number | mask;
}
int main (){
   int number,pos ;
   cin>>number>>pos;
   setIthBit(number,pos);
   cout<<number<<endl;
   return 0;
 }