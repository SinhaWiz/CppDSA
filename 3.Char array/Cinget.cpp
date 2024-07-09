#include <bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter"<<endl;
char b[1212]; 
char temp = cin.get();
int len =0;
while(temp != '\n')
{
    b[len++]=temp;
    temp = cin.get();
}
cout<<b;
    return 0;
}