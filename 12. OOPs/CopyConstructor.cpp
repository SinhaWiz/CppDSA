#include <bits/stdc++.h>
using namespace std;
class Product{
    int id;
    int mrp;  
    char *name;
    int selling_price;
public:
   
    Product(int id , int mrp , int selling_price , char *n){
        this->id = id;
        this->mrp = mrp;  
        this->selling_price = selling_price;
        name = new char[strlen(n)+1];
    }


Product(Product &X){
        id = X.id;
        name =new char[strlen(X.name)+1];
        strcpy(name,X.name);
        selling_price =X.selling_price;
        mrp = X.mrp;
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

    void setNAME(char *name){
                    strcpy(this->name,name);
    }
    void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: " <<id<<endl;
        cout<<"MRP: "<<mrp<<endl;
        cout<<"Sell price: "<<selling_price<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"-------------------------------------"<<endl;
    }
};
int main(){
  Product camera(123131413,1010,2012,"Sony MAxon") ;
  Product webcam = camera;
  Product handycam(camera);
  camera.showDetails();
  webcam.showDetails();
  handycam.showDetails();
    return 0;
}