#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform Kahn's algorithm for topological sorting
vector<int> kahnAlgorithm(int n, vector<vector<int>>& adj) {
    vector<int> inDegree(n, 0);  // Initialize all in-degrees to 0
    vector<int> topOrder;        // Vector to store the topological order

    // Calculate in-degrees of all vertices
    for (int i = 0; i < n; ++i) {
        for (int j : adj[i]) {
            inDegree[j]++;
        }
    }

    // Queue to store vertices with in-degree 0
    queue<int> q;

    // Push all vertices with in-degree 0 into the queue
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    // Process the vertices in the queue
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topOrder.push_back(u);

        // Decrease in-degree of all adjacent vertices
        for (int v : adj[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
        }
    }

    // Check if a cycle exists (i.e., topological sort includes all vertices)
    if (topOrder.size() != n) {
        cout << "The graph contains a cycle, and topological sorting is not possible." << endl;
        return {};
    }

    return topOrder;
}

int main() {
    int n, m;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n);

    cout << "Enter the edges (u v) where u -> v:" << endl;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> topOrder = kahnAlgorithm(n, adj);

    if (!topOrder.empty()) {
        cout << "Topological Sorting: ";
        for (int v : topOrder) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
