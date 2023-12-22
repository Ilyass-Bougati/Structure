#include <stdio.h>
#include <stdlib.h>
#include "include/chaines.h"

int main()
{
    printf("Entrer une chaine de characteres : ");
    char *str1 = saisirchaine();
    printf("Entrer une chaine de characteres : ");
    char *str2 = saisirchaine();
    str1 = copieChaine(str1, str2);
    puts(str1); 
}





