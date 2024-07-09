#include <bits/stdc++.h>
using namespace std;
int main(){

  int x = 12;
  float y =123.23;
  int *p = &x;
  cout<<&x<<endl;  
  cout<<p<<endl;
  cout<<&p<<endl;
    //Pointer to a pointer
    int **X =&p;
    cout<<X<<endl;
    

    

  return 0;
}