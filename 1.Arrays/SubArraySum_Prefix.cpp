#include <bits/stdc++.h>
using namespace std;
int  Max_SubArraySum(int arr[],int n ){
    //Making a secondary array that will have the sum of subArrays named as prefixArray
    int prefixArray[n];
    prefixArray[0] = arr[0];
    for(int i = 1 ; i<n ; i++){
        prefixArray[i] = arr[i]+prefixArray[i-1];
    }
    int maxSum = 0;
    for(int i = 0 ; i<n ; i++)
    {
        for( int j = i ; j<n ; j++)
        {
            int subSum =i>0? prefixArray[j]-prefixArray[i-1] :prefixArray[j];
            maxSum = max(subSum,maxSum);
        }
    }
     return maxSum;
    
}
int main(){
    int array[]= {45,66,-88,89,-99,112,-134};
    int n = sizeof(array)/sizeof(int);
    int X = Max_SubArraySum(array,n);
    cout<<X;
    return 0;
}