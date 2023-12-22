#include <stdio.h>
#include <stdlib.h>
#include "include/chaines.h"

int main()
{
    printf("Entrer une chaine de characteres : ");
    char *str1 = saisirchaine();
    char *b = palindrome(str1);
    puts(b); 
}




