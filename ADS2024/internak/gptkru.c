#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct min {
    int i;
    int j;
    int cost;
};

int find(int x, int parent[]) {
    if (parent[x] != x)
        parent[x] = find(parent[x], parent);  // Path compression
    return parent[x];
}

struct min *findmin(int n, int edges[][n]) {
    int max = INT_MAX;
    struct min *edged = (struct min *)malloc(sizeof(struct min));
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (edges[i][j] != 0 && edges[i][j] < max) {
                max = edges[i][j];
                edged->cost = edges[i][j];
                edged->i = i;
                edged->j = j;
            }
        }
    }
    edges[edged->i][edged->j] = edges[edged->j][edged->i] = INT_MAX;  // Mark as visited
    return edged;
}

int main() {
    int n, ednum = 0, cost = 0;
    printf("Enter number of Vertices: ");
    scanf("%d", &n);

    int vert[n], parent[n], edges[n][n], mst[n][n];

    // Input vertices
    for (int i = 0; i < n; i++) {
        printf("Enter your vertex: ");
        scanf("%d", &vert[i]);
    }

    // Initialize parent and mst arrays
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        for (int j = 0; j < n; j++) {
            mst[i][j] = 0;
        }
    }

    // Input edges
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            edges[i][j] = edges[j][i] = 0;
            if (i != j) {
                printf("Enter Graph[%d][%d]: ", vert[i], vert[j]);
                scanf("%d", &edges[i][j]);
                edges[j][i] = edges[i][j];
            }
        }
    }

    // Kruskal's algorithm
    struct min *minedge;
    while (ednum < n - 1) {
        minedge = findmin(n, edges);
        int u = minedge->i;
        int v = minedge->j;
        int cst = minedge->cost;

        if (find(u, parent) != find(v, parent)) {
            mst[u][v] = mst[v][u] = cst;
            cost += cst;
            parent[find(v, parent)] = find(u, parent);  // Union operation
            ednum++;
        }
        free(minedge);
    }

    // Print the MST
    printf("Minimum Spanning Tree (MST):\n");
    for (int i = 0; i < n; i++) {
        printf("%d -> ", vert[i]);
        for (int j = 0; j < n; j++) {
            if (mst[i][j] != 0)
                printf("%d(%d)\t", vert[j], mst[i][j]);
        }
        printf("\n");
    }
    printf("Total cost of MST: %d\n", cost);

    return 0;
}
