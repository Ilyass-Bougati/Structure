#include <stdio.h>
#include <stdlib.h>
#include "tri.h"
#include "tableau.h"


void tri_bule(int *T, int n)
{
    if (n == 1)
    {
        return;
    }

    int i, temp;
    for (int i = 0; i < n - 1; i++)
    {
        if (T[i] >= T[i + 1])
        {
            temp     = T[i];
            T[i]     = T[i + 1];
            T[i + 1] = temp;
        }
    }

    tri_bule(T, n - 1);

}

void tri_insertion(int *T, int n)
{
    int i, k, temp;

    for (i = 0; i < n; i++)
    {
        temp = T[i];
        for (k = i; k > 0 && T[k] < T[k - 1]; k--)
        {
            T[i] = T[k];
            T[k] = temp;
        }
    }
}


void permut(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int *T, int low, int high)
{
    int j = low, i;

    for (i = low + 1; i < high; i++)
    {
        if(T[i] < T[low])
        {
            j++;
            permut(T + i, T + j);
        }
    }
    permut(T + j, T + low);
    return j;
}


void tri_rapide(int *T, int low, int high)
{
    int pv;
    if (low < high)
    {
        pv = partition(T, low, high);
        tri_rapide(T, low, pv - 1);
        tri_rapide(T, pv + 1, high);
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
