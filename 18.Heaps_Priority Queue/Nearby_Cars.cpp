#include <bits/stdc++.h>
using namespace std;
class Car{
public:
    string id;
    int x,y;
    Car(string id , int x , int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist() const{
        return x*x +y*y;
    }
};
class CarCompare{
public:
bool operator()(const Car A ,const Car B){
        return A.dist()<B.dist();
 }
};
bool distCompare(Car A , Car B){
 return A.dist() <B.dist();
}
void printNearestCars(vector<Car> cars , int k){
//create a max heap of size K
 priority_queue<Car ,vector<Car> , CarCompare> max_heap(cars.begin(),cars.begin()+k);
 for(int i = k ;i<cars.size();i++){
    auto car = cars[i];
    if(car.dist()< max_heap.top().dist()){
        max_heap.pop();
        max_heap.push(car);
    }
 }
 vector<Car>output;
 while(!max_heap.empty()){
   // cout<<max_heap.top().id <<endl;
    output.push_back(max_heap.top());
    max_heap.pop();
 }
 //sort(output.begin(),output.end(),distCompare);
 reverse(output.begin(),output.end());
 for(auto car:output){
    cout<<car.id<<endl;
 }
 return;
}
int main(){
    int N,K;
    cin>>N>>K;
    string id;
    int x;
    int y;
    vector<Car> cars;
    for(int i=0 ; i<N ;i++){
        cin>>id>>x>>y;
        Car car(id,x,y);
        cars.push_back(car);
    }
    /*input:
    5 3
    C1 1 1
    C2 2 1
    C3 3 2
    C4 0 1
    C5 2 3
    */
    /*output:
    C4 
    C1
    C2
    */
    printNearestCars(cars,K);
    return 0;
}

 