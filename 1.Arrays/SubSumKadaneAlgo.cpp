#include <bits/stdc++.h>
using namespace std;
int  Kadane_SubArraySum(int arr[],int n ){
    int currSum = 0;
    int maxSum = 0 ;
    for(int i = 0 ; i<n ; i++)
    {
         currSum += arr[i];
           if(currSum<0)
           {
            currSum= 0;
           }
            maxSum = max(currSum,maxSum);
        
    }
     return maxSum;
    
}
int main(){
    int array[]= {145,66,-68,89,-99,112,-134,110};
    int n = sizeof(array)/sizeof(int);
    int X = Kadane_SubArraySum(array,n);
    cout<<X;
    return 0;
}