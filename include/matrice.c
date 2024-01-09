#include <stdlib.h>
#include <stdio.h>

int **matrice(int n, int m)
{
    int **M, i, j;

    M = (int **) malloc(n * sizeof(int *));

    for (i = 0; i < n; i++)
    {
        M[i] = (int *) malloc(m * sizeof(int));
        for (j = 0; j < m; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", M[i] + j);
        }
    }

    return M;
}

void printm(int **M, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d", M[i][j]);
        }
        printf("\n");
    }
}

int **mulmat(int **A, int **B, int n, int m, int p)
{
    int i, j, k;

    int **C;
    C = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        C[i] = (int *) malloc(p * sizeof(int));
        for (j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}