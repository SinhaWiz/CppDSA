#include <bits/stdc++.h>
using namespace std;
void printSubArray(int arr[],int n ){
    
    for(int i = 0 ;i< n ; i++)
    {
        for(int j=i ; j<n; j++)
        {
            for(int k = i ;k<=j ; k++)
            {
                  cout<<arr[k]<<" ";
                  
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
}
int main(){
    int array[]= {45,66,88,89,99,112,134};
    int n = sizeof(array)/sizeof(int);
    printSubArray(array,n);
    return 0;
}