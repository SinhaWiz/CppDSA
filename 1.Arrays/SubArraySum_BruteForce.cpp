#include <bits/stdc++.h>
using namespace std;
int  Max_SubArraySum(int arr[],int n ){
    int maxSum = 0;
    //N^3 Time complexity
    for(int i = 0 ; i<n ; i++)
    {
        for( int j = i ; j<n ; j++)
        {
            int subSum= 0;
            for(int k =i ;k<=j ; k++)
            {
               subSum += arr[k];
            }
            // if(subSum> maxSum)
            // {maxSum=subSum;} OR,
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