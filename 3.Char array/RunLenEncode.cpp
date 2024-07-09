//This code basically compresses a string in a specific manner
#include <bits/stdc++.h>
using namespace std;
int main(){
string input ;
string output ;
getline(cin, input);

int n=input.length();
for(int i = 0 ; i<n ; i++)
{
    int count = 1;
    while( input[i]==input[i+1] and i<n){
      count++;
      i++;
    }if(count>1){
    output+=input[i];
    output+='0'+count;//we can also use the to_string() method to conver the int to str
    }
    else
     output+=input[i];
}
if(output.length() < input.length()){
         cout<<output;    
}
else
cout<<input;

    return 0;
}