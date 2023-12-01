#include <stdio.h>
#include <stdlib.h>
#include "include/tri.h"
#include "include/tableau.h"
#include "include/recherche.h"

int main()
{
    int *T, n, i;
    do {
        printf("Entrer la longeur du tableau : ");
        scanf("%d", &n);
    } while (n <= 1);

    T = Table(n);
    printt(T, n);
    rech_dicho(T, 0, n, 2);
}





