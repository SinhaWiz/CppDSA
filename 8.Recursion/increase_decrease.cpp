#include <bits/stdc++.h>
using namespace std ;
void decrease(int n){
    if(n==0)
    {
        return ;
    }
 cout<<n<<" ";
 decrease(n-1);
}

void increase(int n){
 if(n==0)
    {
        return;
    }
 increase(n-1); 
 cout<<n<<" ";
}
int main(){
int n=50000 ;
// cin>>n;
decrease(n);
cout<<endl;
increase(n);
cout<<endl;
    return 0;
}
