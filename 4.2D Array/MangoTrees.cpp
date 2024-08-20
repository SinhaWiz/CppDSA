#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to calculate the number of mango trees in a sub-grid using the prefix sum array
int countMangoes(vector<vector<int>>& prefixSum, int x1, int y1, int x2, int y2) {
    int total = prefixSum[x2][y2];
    if (x1 > 0) total -= prefixSum[x1 - 1][y2];
    if (y1 > 0) total -= prefixSum[x2][y1 - 1];
    if (x1 > 0 && y1 > 0) total += prefixSum[x1 - 1][y1 - 1];
    return total;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char c;
            cin >> c;
            grid[i][j] = (c == '#') ? 1 : 0;
        }
    }
    // Create prefix sum array
    vector<vector<int>> prefixSum(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            prefixSum[i][j] = grid[i][j];
            if (i > 0) prefixSum[i][j] += prefixSum[i - 1][j];
            if (j > 0) prefixSum[i][j] += prefixSum[i][j - 1];
            if (i > 0 && j > 0) prefixSum[i][j] -= prefixSum[i - 1][j - 1];
        }
    }
    int maxMangoes = 0;
    // Try all possible positions for horizontal and vertical lines
    for (int x = 0; x < n - 1; ++x) {
        for (int y = 0; y < n - 1; ++y) {
            int topLeft = countMangoes(prefixSum, 0, 0, x, y);
            int topRight = countMangoes(prefixSum, 0, y + 1, x, n - 1);
            int bottomLeft = countMangoes(prefixSum, x + 1, 0, n - 1, y);
            int bottomRight = countMangoes(prefixSum, x + 1, y + 1, n - 1, n - 1);
            // We need to subtract the overlaps to get correct number of mangoes in the bottom right rectangle
            bottomRight = prefixSum[n-1][n-1] - topLeft - topRight - bottomLeft;

            // Find the minimum of the four regions
            int minMangoes = min({topLeft, topRight, bottomLeft, bottomRight});

            // We want to maximize this minimum number
            maxMangoes = max(maxMangoes, minMangoes);
        }
    }
    cout << maxMangoes << endl;
    return 0;
}
