#include <bits/stdc++.h>
using namespace std;
int main(){
  int x = 12;
  //We cannot do int &y; and initialize later , we have to iitialize in the first line
   int &y=x;
   cout<<&x <<endl <<&y<<endl;
   x++;
   y++;
   cout<<x<<endl<<y<<endl;    
  return 0;
}