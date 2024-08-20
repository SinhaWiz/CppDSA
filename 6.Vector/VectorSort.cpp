#include <bits/stdc++.h>
using namespace std;
int calcTotalmarks(vector<int>marks){

    return marks [ 0 ] + marks [ 1 ] + marks [ 2 ];
}
bool compare(pair<string,vector<int>>s1,pair<string , vector <int>>s2){
vector<int > m1  = s1.second;
vector<int> m2  = s2 . second;
return calcTotalmarks(m1)>calcTotalmarks(m2);
}
int main(){
vector<pair<string,vector<int>>> student_marks = 
{{"Sinha" , {91,88,79}},
{"Navid" , {92,89,80}},
{"Umar" , {90,81,85}}
} ;
sort(student_marks.begin(),student_marks.end(),compare);
    for(auto s : student_marks)
    cout<<s.first<<"  "<< calcTotalmarks(s.second)<<endl;
    
    return 0;
}