#include <bits/stdc++.h>
using namespace std;
int main(){
    
vector<int> arr = { 1 , 2 , 3 , 4 , 5 ,7,8,9,10,11,121,131,12,23,53};
int key =121;
cin>>key;
vector<int>::iterator it =find(arr.begin(),arr.end(),key);
if(it!=arr.end()){
    cout<<"present at index "<<it-arr.begin();
}
else
cout<<"not found!"<<endl;
    return 0;
}