#include <bits/stdc++.h>
using namespace std;
int main(){
int cur_len =0;
int largest_len = 0;
char largest_str[1000];
char a[1000] ;
int x ;
cin>>x;
cin.get();//to connsume the new line character after integer input
while(x--)
{
    cin.getline(a,1000);//by defalt 3rd argument is new line character
    cur_len = strlen(a);
    if(cur_len>largest_len)
    {
        largest_len = cur_len;
        strcpy(largest_str,a);
    }
}
cout<<"Largest of the Strings is :" <<largest_str<<" \nwith the length of : "<<largest_len;
    return 0;
}