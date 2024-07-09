#include <bits/stdc++.h>
using namespace std;
void TaxCalculate(float &money){
    float tax =0.3;
    money =money -  money*tax;
}
// void TaxCalculate(int money){
//     float tax =0.3;
//     money -= money*tax;
// }
int main(){
  float income=1000  ;
//   cin>>income;  
TaxCalculate(income);
    cout<<income;

  return 0;
}