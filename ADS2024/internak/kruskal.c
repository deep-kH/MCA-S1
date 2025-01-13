#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int n = 10;

struct min
{
    int i;
    int j;
    int cost;
};

int find(int x, int paerent[])
{
    if (paerent[x] == x)
        return x;
    else
        paerent[x] = find(paerent[x], paerent);
    return paerent[x];
}

struct min *findmin(int edges[][n], int n)
{
    int max = INT_MAX;
    struct min *edged = (struct min *)malloc(sizeof(struct min));
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (edges[i][j] != 0 && edges[i][j] < max)
            {
                max = edges[i][j];
                edged->cost = edges[i][j];
                edged->i = i;
                edged->j = j;
            }
        }
    }

    edges[edged->i][edged->j] = edges[edged->j][edged->i] = INT_MAX;
    return edged;
}

int main()
{
    int n, ednum = 0, cost = 0;
    printf("Enter number of Vertices : ");
    scanf("%d", &n);

    int vert[n], paerent[n], edges[n][n], mst[n][n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter your vertex : ");
        scanf("%d", &vert[i]);
    }

    for (int i = 0; i < n; i++)
        paerent[i] = i;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            mst[i][j] = mst[j][i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            edges[i][j] = edges[j][i] = 0;
            if (i != j)
            {
                printf("Enter Graph[%d][%d] : ", vert[i], vert[j]);
                scanf("%d", &edges[i][j]);
                edges[j][i] = edges[i][j];
            }
        }
    }

    struct min *minedge;
    while (ednum < n - 1)
    {
        printf("Inside %d\n", ednum);
        minedge = findmin(edges, n);
        int u = minedge->i;
        int v = minedge->j;
        int cst = minedge->cost;
        if (find(u, paerent) != find(v, paerent))
        {
            mst[u][v] = mst[v][u] = cst;
            cost += cst;
            paerent[find(v, paerent)] = find(u, paerent);
            ednum++;
        }
        free(minedge);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d -> ", vert[i]);
        for (int j = 0; j < n; j++)
        {
            if (mst[i][j] != 0)
                printf("%d(%d)\t", vert[j], mst[i][j]);
        }
        printf("\n");
    }
    return 0;
}
