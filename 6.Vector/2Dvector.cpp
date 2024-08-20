#include <bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>> arr ={{1,2,3},{4,5,6},{7,8,9,10}};
arr[0][0] = 10;
vector<int> ARR(10 ,5);
for(int i = 0; i< arr.size(); i++){
    for(int  num : arr[i]){
        cout<<num<<endl;
    }
}
    return 0;
}