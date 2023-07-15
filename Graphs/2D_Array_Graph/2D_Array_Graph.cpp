#include <iostream>

using namespace std;

const int MAX_VERTICES = 100;

void createGraph(int V, int E, int adj[MAX_VERTICES][MAX_VERTICES]) {
    int u, v;

    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            adj[i][j] = 0;
        }
    }

    for (int i = 0; i < E; i++) {
        cout << "Reading Edge " << i + 1 << ": ";
        cin >> u >> v;
        if (u >= 1 && u <= V && v >= 1 && v <= V) {
            adj[u][v] = 1;
        } else {
            cout << "Invalid vertices!" << endl;
        }
    }
}

void printGraph(int V, int adj[MAX_VERTICES][MAX_VERTICES]) {
    cout << "Adjacency Matrix:" << endl;
    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V, E;

    cout << "Number of Vertices: ";
    cin >> V;

    cout << "Number of Edges: ";
    cin >> E;

    int adj[MAX_VERTICES][MAX_VERTICES];
    createGraph(V, E, adj);

    printGraph(V, adj);

    return 0;
}


