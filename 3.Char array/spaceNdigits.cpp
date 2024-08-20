#include <bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter"<<endl;

char input = cin.get();
int alphabet =0;
int digits = 0;
int spaces = 0 ;

while(input != '\n')
{
   if(input>='0' and input <='9'){
        digits++;
   }
   else if(input == ' '){
        spaces++;
   }
   else
   {
    alphabet++;
   }
    input = cin.get();
}
cout<<"Alphabets : "<<alphabet<<endl;
cout<<"Digits : "<<digits<<endl;
cout<<"Spaces : "<<spaces<<endl;
    return 0;
}