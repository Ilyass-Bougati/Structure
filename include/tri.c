#include <stdio.h>
#include <stdlib.h>
#include "tri.h"
#include "tableau.h"


void tri_bule(int *tableau, int longeur)
{
    int i, k, temp;
    for (k = longeur; k > 1; k--)
    {
        for (i = 0; i < longeur - 1; i++)
        {
            if (tableau[i] >= tableau[i + 1])
            {
                temp     = tableau[i];
                tableau[i]     = tableau[i + 1];
                tableau[i + 1] = temp;
            }
        }
    }
}

void tri_insertion(int *tableau, int longeur)
{
    int i, k, temp;

    for (i = 0; i < longeur; i++)
    {
        temp = tableau[i];
        for (k = i; k > 0 && temp < tableau[k - 1]; k--)
        {
            tableau[k] = tableau[k - 1];
        }
        tableau[k - 1] = temp;
    }
}


void permut(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int *tableau, int low, int high)
{
    int j = low, i;

    for (i = low + 1; i < high; i++)
    {
        if(tableau[i] < tableau[low])
        {
            j++;
            permut(tableau + i, tableau + j);
        }
    }
    permut(tableau + j, tableau + low);
    return j;
}


void tri_rapide(int *tableau, int low, int high)
{
    int pv;
    if (low < high)
    {
        pv = partition(tableau, low, high);
        tri_rapide(tableau, low, pv - 1);
        tri_rapide(tableau, pv + 1, high);
    }
}


void fusion(int *tableau, int debut, int fin)
{
    // creating a new array
    int *G;
    int i, j, mid, k;

    // determining the middle of the array
    mid = (debut + fin) / 2;
    i = debut;
    j = mid + 1;

    G = (int *) malloc((fin - debut + 1) * sizeof(int));

    for (k = 0; k <= fin - debut; k++)
    {
        if ((tableau[i] < tableau[j] && i <= mid) || j > fin)
        {
            G[k] = tableau[i++];
        } else {
            G[k] = tableau[j++];
        }
    }

    for (k = 0; k <= fin - debut; k++)
    {
        tableau[debut + k] = G[k]; 
    }

    // pas dans le cours
    free(G);
}


void tri_fusion(int *tableau, int debut, int fin)
{
    int mid;
    if (fin > debut)
    {
        mid = (debut + fin) / 2;
        tri_fusion(tableau, debut, mid);
        tri_fusion(tableau, mid+1, fin);
        fusion(tableau, debut, fin);
    }
}
