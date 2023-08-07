#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    char *c;
    int length = 0;

    if (str == NULL)
        return NULL;


    length = strlen(str);


    c = malloc((length + 1) * sizeof(char));

    if (c == NULL)
        return NULL;

    for (int i = 0; i <= length; i++)
        c[i] = str[i];

    return c;
}
