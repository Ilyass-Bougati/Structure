#include "chaines.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

char * saisirchaine()
{
    char *CH, c;
    int i = 0;

    CH = (char *) malloc(sizeof(char));

    while ((c = getchar()) != '\n')
    {
        CH[i++] = c;
        CH = (char *) realloc(CH, (i + 1) * sizeof(char));
    }
    CH[i] = '\0';

    return CH;
}


void majuscules(char *CH)
{
    int i;
    for (i = 0; CH[i] != '\0'; i++)
    {
        if (CH[i] <= 'z' && CH[i] >= 'a')
        {
            CH[i] += 'A' - 'a';
        }
    }
}


void supchar(char *CH, char c)
{
    int i, j = 0;
    char temp;

    for (i = 0; CH[i] != '\0'; i++)
    {
        CH[j] = CH[i];
        if (CH[i] != c)
        {
            j++;
        }
    }
    CH[j] = '\0';

    for (i = j; CH[i] != '\0'; i++)
    {
        free(CH + i);
    }
}

char* copieChaine(char *dest, char *src)
{
    int i;
    int l_dest = strlen(dest);
    int l_src  = strlen(src);

    dest = (char *) realloc(dest, (l_dest + l_src) * sizeof(char));
    dest[l_dest - 1] = ' ';
    for (i = 0; i < l_src; i++)
    {
        dest[i + l_dest] = src[i];
    }

    return dest;
}


char *palindrome(char *CH)
{
    int i = 0;
    int len = strlen(CH);

    for (i = 0; i < len - 1; i++)
    {
        if (CH[i] != CH[len - 1 - i])
        {
            return "false";
        }
    }

    return "true";
}