#include <bits/stdc++.h>
using namespace std;
class Product{
    int id;
    int mrp;  
    string name;
    int selling_price;
public:
    Product(){
        cout<<"Default Constructor called"<<endl;
    }
    Product(int id , int mrp , int selling_price , string name){
        cout<<"Overloaded Constructor called"<<endl;
        this->id = id;
        this->mrp = mrp;
        this->name = name;
        this->selling_price = selling_price;
    }
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
  Product camera(123131413,1010,2012,"Sony MAxon") ;
  
  cout<<camera.getSellingPrice()<<endl;
  cout<<camera.getName()<<endl;
    return 0;
}