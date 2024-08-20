#include <bits/stdc++.h>
using namespace std;
int main (){
int number ;
cin>> number;
int result =number & (number - 1 );
if(result == 0){
    cout<<"The number is power of two";
}
else
    cout<<"The number is not power of two";
    return 0;
}