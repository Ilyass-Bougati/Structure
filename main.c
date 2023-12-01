#include <stdio.h>
#include <stdlib.h>
#include "include/tri.h"
#include "include/tableau.h"


int main()
{
    int *T, n, i;
    do {
        printf("Entrer la longeur du tableau : ");
        scanf("%d", &n);
    } while (n <= 1);

    T = Table(n);
    printt(T, n);
    fusion(T, 0, n - 1);
    printt(T, n);
}

//  T = 1 3 2 4
//      i   j
//  G = 1
//  T = 1 3 2 4
//        i j
//  G = 1 2
//  T = 1 3 2 4
//        i   j
//




