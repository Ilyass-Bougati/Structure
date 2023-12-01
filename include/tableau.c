#include "tableau.h"
#include <stdio.h>
#include <stdlib.h>


void printt(int *tableau, int longeur)
{
    int i;
    for (i = 0; i < longeur; i++)
    {
        printf("%d  ", tableau[i]);
    }
    printf("\n");
}


int * Table(int longeur)
{
    int * tableau = (int *) malloc(longeur * sizeof(int));
    int i;

    for (i = 0; i < longeur; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", tableau + i);
    }

    return tableau;
}


void suprime_nombre(int *tableau, int *longeur, int nombre)
{
    int i, j = 0;
    for (i = 0; i < *longeur; i++)
    {
        tableau[j] = tableau[i];
        if (tableau[i] != nombre)
        {
            j++;
        }
    }

    for (i = j; i < *longeur; i++)
    {
        free(tableau + i);
    }

    *longeur = j;
}


void suprime_doublant(int *tableau, int *longeur)
{
    int i, j, k;
    for (k = 0; k < *longeur; k++)
    {
        j = k + 1;
        for (i = k + 1; i < *longeur; i++)
        {
            tableau[j] = tableau[i];
            if (tableau[i] != tableau[k])
            {
                j++;
            }
        }

        for (i = j; i < *longeur; i++)
        {
            free(tableau + i);
        }

        *longeur = j;
    }
}