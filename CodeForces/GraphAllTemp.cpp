#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
vector<int> adj[MAX];
int level[MAX], parent[MAX];
bool visited[MAX];  // For DFS

// ---------- BFS: Shortest path in unweighted graph ----------
void BFS(int source) {
    fill(level, level + MAX, -1);
    fill(parent, parent + MAX, -1);

    queue<int> q;
    q.push(source);
    level[source] = 0;
    parent[source] = source;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (level[v] == -1) {
                level[v] = level[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void printBFSPath(int destination) {
    if (parent[destination] != destination)
        printBFSPath(parent[destination]);
    cout << destination << " ";
}

// ---------- DFS: Traverse all reachable nodes ----------
void DFS(int u) {
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u]) {
        if (!visited[v]) {
            DFS(v);
        }
    }
}

// ---------- Topological Sort (DFS-based) ----------
stack<int> topoStack;
bool topoVisited[MAX];

void topoDFS(int u) {
    topoVisited[u] = true;
    for (int v : adj[u]) {
        if (!topoVisited[v]) {
            topoDFS(v);
        }
    }
    topoStack.push(u);
}

void topoSort(int nodeCount) {
    fill(topoVisited, topoVisited + MAX, false);
    while (!topoStack.empty()) topoStack.pop();  // clear stack

    for (int i = 1; i <= nodeCount; ++i) {
        if (!topoVisited[i]) {
            topoDFS(i);
        }
    }

    cout << "Topological Sort Order: ";
    while (!topoStack.empty()) {
        cout << topoStack.top() << " ";
        topoStack.pop();
    }
    cout << "\n";
}

// ---------- MAIN ----------
int main() {
    int node, edge;
    cout << "Enter number of nodes and edges:\n";
    cin >> node >> edge;

    cout << "Enter edges:\n";
    for (int i = 0; i < edge; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);// For undirected graphs, also do: adj[v].push_back(u);
    }

    // Show adjacency list
    cout << "Adjacency List:\n";
    for (int i = 1; i <= node; ++i) {
        cout << i << " -> ";
        for (int v : adj[i]) cout << v << " ";
        cout << "\n";
    }

    // ---------- BFS ----------
    int src, dst;
    cout << "Source & Destination for BFS:\n";
    cin >> src >> dst;
    BFS(src);
    cout << "Shortest path length: " << level[dst] << "\n";
    cout << "Shortest path: ";
    printBFSPath(dst);
    cout << "\n";

    // ---------- DFS ----------
    memset(visited, false, sizeof(visited));
    cout << "Source for DFS:\n";
    cin >> src;
    cout << "DFS Path: ";
    DFS(src);
    cout << "\n";

    // ---------- Topological Sort ----------
    topoSort(node);

    return 0;
}
