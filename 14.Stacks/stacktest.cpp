#include <iostream>
#include "stackvct.h"
using namespace std;
int main(){
    Stack<string>s;
     s.push("S");
    s.push("I");
     s.push("N");
    s.push("H");
     s.push("A");
    s.push("W");
     s.push("I");
    s.push("Z");
     s.push("1");
    s.push("2");
     s.push("3");
    s.push("9");
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
}