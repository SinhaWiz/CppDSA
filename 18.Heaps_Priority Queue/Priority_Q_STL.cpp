#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Compare{
public:
    bool operator()(int a , int b){
        return a<b;
    }
};
int main(){
    // priority_queue<int, vector<int> , greater<int>> heap;
 priority_queue<int, vector<int> , Compare> heap;
 int arr[] = {10,23,5,4,8,9,17,20,6};
 for(int x : arr){
    heap.push(x);
 }
 while (!heap.empty()){
    cout<<heap.top()<<"   ";
    heap.pop();
 }


}

