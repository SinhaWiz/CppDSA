#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main (){
stack<string> X;
X.push("Sinha");
X.push("beats");
X.push("Heamal");
while(!X.empty()){
    cout<<X.top()<<endl;
    X.pop();
}
    return 0;
}