#include "tableau.h"
#include <stdio.h>
#include <stdlib.h>

void printt(int *T, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d  ", T[i]);
    }
    printf("\n");
}

int * Table(int n)
{
    int * T = (int *) malloc(n * sizeof(int));
    int i;

    for (i = 0; i < n; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", T + i);
    }

    return T;
}

void suprime_nombre(int *T, int *n, int m)
{
    int i, j = 0;
    for (i = 0; i < *n; i++)
    {
        T[j] = T[i];
        if (T[i] != m)
        {
            j++;
        }
    }
    // TODO: Free the rest of the table
    *n = j;
}