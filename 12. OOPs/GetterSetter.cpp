#include <bits/stdc++.h>
using namespace std;
class Product{
    int id;
    int mrp;  
    string name;
    int selling_price;
public:
   
    void setMrp(int price){
          this->mrp = mrp;
    }
    void setSellPrice(int price){
             this->selling_price = price;
    }
    int getId(){
           return id;
    }
    int getSellingPrice(){
        return selling_price;
    }
    string getName(){
        return name;
    }
    void setNAME(string name){
                    this->name = name;
    }
};
int main(){
  Product camera;
  camera.setNAME("Sony MAXon");
  camera.setSellPrice(12713);
  cout<<camera.getSellingPrice()<<endl;
  cout<<camera.getName()<<endl;
    return 0;
}