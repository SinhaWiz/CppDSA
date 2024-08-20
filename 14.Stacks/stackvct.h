#include <vector>
using namespace std;
template <typename T>
class Stack{
    vector <T> arr;
public:
void   push(T data){
    arr.push_back(data);
}
bool empty(){
   return arr.size() == 0;
}
T top(){
    int last_index = arr.size() - 1;
    return arr[last_index];
}
void pop(){
  arr.pop_back();
}
};
