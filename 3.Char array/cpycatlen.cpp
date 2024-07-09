#include <bits/stdc++.h>
using namespace std;
int main(){
char a[1000] = "apple";
char b[1000];
char c[1000]="banana";

strcpy(b,a);

cout<<strcat(a,c)<<endl;
cout<<a ;
cout<<strcmp(b,a)<<endl;
return 0;
}