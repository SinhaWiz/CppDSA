#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr = { 1 , 2 , 3 , 4 , 5 };
arr.push_back(6);
arr.pop_back();
cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;
for(int a: arr)
{
    cout<<a<<endl;
}
vector<int> ARR(10 ,5);
for(int i = 0 ;i <ARR.size();i++)
{
    cout<<ARR[i]<<endl;
}
    return 0;
}