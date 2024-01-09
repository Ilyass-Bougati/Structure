#include <stdio.h>
#include <stdlib.h>
#include "include/matrice.h"

int main()
{
    int n, m, p;
    printf("Entrer les dimentions des matrices : ");
    scanf("%d%d%d", &n, &m, &p);

    int **A = matrice(n, m);
    int **B = matrice(m, p);
    int **C = mulmat(A, B, n, m, p);
    printm(C, n, p);

}




