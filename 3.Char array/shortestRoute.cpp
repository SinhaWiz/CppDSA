#include <bits/stdc++.h>
using namespace std;
int main(){
char g [1000];
cin.getline(g,1000);
int x =0 ;
int y =0;

for(int i = 0 ; g[i]!='\0';i++){
    switch(g[i]){
       case 'N':
       y++;
       break;
       case 'S':
       y--;
       break;
       case 'E':
       x++;
       break;
       case 'W':
       x--;
       break;
    }
}
cout<<"X = "<<x <<endl<< "Y = "<<y<<endl;
if ( x== 0 and y == 0){
    cout<<"Origin point";
}
else if(x>=0 and y>=0){
     while(y--){
      cout<<"N";
    }
    while(x--){
      cout<<"E";
    }
}
else if(x<=0 and y<=0){
     while(y++){
      cout<<"S";
    }
    while(x++){
      cout<<"W";
    }
}
else if(x>=0 and y<=0){
     while(y++){
      cout<<"S";
    }
    while(x--){
      cout<<"E";
    }
}
else if(x<=0 and y>=0){
     while(y--){
      cout<<"N";
    }
    while(x++){
      cout<<"W";
    }
}
    return 0;
}