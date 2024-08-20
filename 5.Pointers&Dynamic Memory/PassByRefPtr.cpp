#include <bits/stdc++.h>
using namespace std;
void distanceCovered(float *s){
    // (*s)++;
    //  *(s++);
    //  *++s;
     ++*s;
}
int main(){
 float distance = 0;
 cin>>distance;
 distanceCovered(&distance);
 cout<<distance;
  return 0;
}