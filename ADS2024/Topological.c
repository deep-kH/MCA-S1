#include <stdio.h>

void topological(int a[10][10], int n);
void indegree(int a[10][10], int n);

int vist[10]; 


int a[10][10] = {
    {0, 1, 0, 1, 1},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 0, 1, 0}};

int main()
{
    int i, n = 5;

    // Initialize the vist[] arrays
    for (int i = 0; i < 10; i++)
    {
        vist[i] = 0;
    }
    
    topological(a, n);
}

void topological(int a[10][10], int n)
{
    int count = 0;
    printf("Topological Sorting is :");
    while (count < n)
    {
        for (int i = 0; i < n; i++)
        {
            int flag = 0;

            for (int j = 0; j < n; j++)
            {

                if (a[j][i] == 0)
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                continue;
            if (!vist[i])
            {
                vist[i] = 1;
                for (int k = 0; k < n; k++)
                {
                    a[i][k] = 0;
                }
                printf("%d", i);
                break;
            }
        }
        count++;
    }
}