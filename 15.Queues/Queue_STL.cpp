#include <iostream>
#include <queue>
using namespace std;
int main(){
  queue<int> z ;
  z.emplace(1);
  z.emplace(2);
  z.emplace(3);
  z.emplace(4);
  z.push(5);
  
  while(!z.empty()){
    cout<<z.front()<<" ";
    z.pop();
  }
    return 0;
}