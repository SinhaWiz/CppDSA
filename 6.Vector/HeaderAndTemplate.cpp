#include <iostream>
#include "vector.h"
using namespace std;

int main(){
    // Vector v;
Vector<int > v(5);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;
for( int  i = 0 ; i< v.size(); i++){
  cout<<  v[i] << endl;
}
Vector<char> vc ;
vc . push_back('a');
vc . push_back('b');
vc . push_back('c');
vc . push_back('d');
vc . push_back('e');
vc . push_back('f');
for( int  i = 0 ; i< vc.size(); i++){
  cout<<  vc[i] << endl;
}
    return 0;
}