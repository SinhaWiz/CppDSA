#include <bits/stdc++.h>
#include "Hashtable.h"
using namespace std;
int main(){
Hashtable<int> h;
 h.insert("Mango",100);
 h.insert("Apple",130);
 h.insert("Jackfruit",500);
 h.insert("Water Melon",350);
 h.insert("Dragon Fruit",200);
 h.insert("Banana",150);
 h.insert("Grapes",110);
 h.insert("Papaya",210);
 h.insert("Pine Apple",80);
//  h.print();
 string fruit ;
 cin>>fruit;
//  if(h.search(fruit)!=NULL){
//     cout<<"price is:    "<<*h.search(fruit);
//  }
//  else{
//     cout<<"Fruit is not found"<<endl;
//  }
// another method
int *price = h.search(fruit);
if(h.search(fruit)!=NULL){
    cout<<"price is:    "<<*price<<endl;
}
else{
   cout<<"Fruit is not found"<<endl;
}
h["New Fruit"]=175;
cout<<"Cost of new fruit :"<<h["New Fruit"]<<endl;
h["New Fruit"] += 19;
cout<<"Cost of new fruit :"<<h["New Fruit"]<<endl;

    return 0;
}
