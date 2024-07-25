#include <bits/stdc++.h>
#include "list.h"
using namespace std;
int main(){
    List l;
    l.push_back(1);
    l.push_front(0);
    l.push_back(2);
    l.push_front(5);
    l.push_back(6);
    l.insert(7,3);
    l.insert(11,0);
    // l.pop_front();
    
     //for printing data
     Node * head = l.begin();
     l.reverse(head);
     while(head!=NULL){
        cout<<head->getData()<<"->";
        head = head->next;
     }
   
    //  if(l.searchRecursive(head ,-9)){
    //     cout<<"Element is found"<<endl;
    //  }
    //  else{
    //     cout<<"not found!"<<endl;
    //  }
  



    return 0;
}