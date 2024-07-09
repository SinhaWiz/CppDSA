#include <iostream>
#include <vector>
using namespace std;
void clearRangedbits(int &n,int i ,int j) {
      int mask;
      mask = (-1<<j+1) |~(-1<<i); //   ((1<<i)-1)  
      n = n & mask ; 
}
int main() {
    int n=31;
    int i=1;
    int j=3;
    clearRangedbits(n,i,j);
    cout<<n<<endl;
    return 0;
}
