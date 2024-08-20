#include <bits/stdc++.h>
using namespace std;
class product{
    char name[100];
    int selling_price;
public:    
    int id;
    int mrp;   
};
int main(){
  product camera ;
  camera.mrp = 100;
  camera.id = 872466216;
  cout<<camera.mrp<<endl;
  cout<<camera.id<<endl;
    return 0;
}