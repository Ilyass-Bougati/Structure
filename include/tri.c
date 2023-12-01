#include <stdio.h>
#include <stdlib.h>
#include "tri.h"


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


void fusion(int *T, int deb, int fin)
{
    int *G;
    int i, j, mid, k;
    mid = (deb + fin)/2;
    i = deb;
    j = mid + 1;
    G = (int *) malloc((fin - deb + 1)*sizeof(int));

    for (k = 0; k <= fin-deb; k++)
    {
        if((T[i] < T[j] && i <= mid) || j > fin)
        {
            G[k] = T[i++];
        } else {
            G[k] = T[j++];
        }
    }

    for (k = 0; k <= fin - deb; k++)
    {
        T[deb + k] = G[k];
    }
}

// FIXME : This function doesn't work
void tri_fusion(int *T, int deb, int fin)
{
    int mid;
    if (fin > deb)
    {
        mid = (deb + fin)/2;
        tri_fusion(T, deb, mid);
        tri_fusion(T, mid + 1, fin);
        fusion(T, deb, fin);
    }
}