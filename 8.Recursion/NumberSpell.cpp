#include <bits/stdc++.h>
using namespace std ;
string Numbers[] = {"Zero ", "One ", "Two ","Three ","Four ","Five ","Six ","Seven ","Eight ","Nine "};
void SpellNumber(int n){
    if(n==0){
        return ;
    }
    int Last_Digit  = n%10;
    SpellNumber(n/10);
    cout<<Numbers[Last_Digit];
}
int main(){
int n ;
cin>>n;
SpellNumber(n);
    return 0;
}
