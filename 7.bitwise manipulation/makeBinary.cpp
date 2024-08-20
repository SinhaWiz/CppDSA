#include <bits/stdc++.h>
using namespace std;
void decimalToBinary(int n) {
 vector<int> binaryNum; 
    while (n > 0) {
        binaryNum.push_back(n % 2);      
        n = n / 2;
    }   
    for (int i = binaryNum.size() - 1; i >= 0; i--)
        cout << binaryNum[i];    
    cout << endl;
}
int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary representation: ";
    decimalToBinary(n);
    return 0;
}
