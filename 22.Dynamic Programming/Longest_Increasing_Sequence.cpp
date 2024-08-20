#include <bits/stdc++.h>
using namespace std;
int LIS(vector<int>seq){
 int n = seq.size();
 int len = 0;
 vector<int> dp(n,1);
 for(int i = 1 ; i<n ;i++){
    for(int j =0 ; j<i ;j++){
        if(seq[j]<seq[i]){
            dp[i]=dp[j]+1;
            len = max(len , dp[i]);
        }
    }
 }
 for(int x : dp){
    cout<<x<<"  ";
 }
 cout<<endl;
 return len;
}
int main(){
    vector<int>seq = {50,4,10,8,39,100};
    cout<<LIS(seq);
    return 0;
}