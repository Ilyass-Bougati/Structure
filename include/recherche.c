#include "recherche.h"
#include <stdio.h>


int rech_lineaire(int *tableau, int lengeur, int nombre)
{
    int i = 0;
    while (i < lengeur && tableau[i] != nombre)
    {
        i++;
    }
    
    if (tableau[i] == nombre)
    {
        printf("La valeur est trouve a i = %d\n", i);
        return i;
    } else {
        printf("La valeur n'exist pas a ce tableau\n");
    }

    return -1;
}


int tri_rech_lineaire(int *tableau, int lengeur, int nombre)
{
    int i = 0;
    while (i < lengeur && tableau[i] < nombre)
    {
        i++;
    }

    if (tableau[i] == nombre)
    {
        printf("La valeur est trouve a i = %d\n", i);
        return i;
    } else {
        printf("La valeur n'exist pas a ce tableau\n");
    }
}


int rech_dicho(int *tableau, int debut, int fin, int nombre)
{
    int i, mid, z;

    if (debut > fin)
    {
        printf("L'element n'extist pas\n");
        return -1;
    }

    mid = (debut + fin)/2;
    if (tableau[mid] == nombre)
    {
        printf("La valeur est trouve a i = %d\n", mid);
        return mid;
    } else {
        if (nombre > tableau[mid])
        {
            debut = mid + 1;
        } else {
            fin = mid;
        }

        rech_dicho(tableau, debut, fin, nombre);
    }

}