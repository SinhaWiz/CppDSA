#include <bits/stdc++.h>
using namespace std;
class Vector {
int *arr;
int cs;
int ms;
public :
    Vector(int max_size=1  ){
        cs=0;
         ms=max_size ;
        arr=new int[ms];
    }
int front (){
    return arr[0];
}
int size (){
    return cs;
}
int back (){
    return arr[cs-1];
}
int capacity ()const{
    return ms;
}
int at (const int i){
    return arr[i];
}
void push_back (int d){
    if (cs==ms){
            int *oldArr = arr;
            ms=2*ms;
            for(int i = 0 ; i<cs ;i++){
                arr[ i ] = oldArr[ i ];
            }
            delete [] oldArr;
    }
    arr[cs]=d;
    cs++;
}
void pop_back (int d){
    if(cs>=0){
    cs--;
    }
}
bool isEmpty()const{
    return ( cs==0 );
}
int  operator[](const int i)const{
return arr[i];
}
};
int main(){
// Vector v;
Vector v(5);
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
    return 0;
}