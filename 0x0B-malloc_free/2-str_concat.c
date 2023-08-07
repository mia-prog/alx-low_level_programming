#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    int length1 = strlen(s1);
    int length2 = strlen(s2);
    int total_length = length1 + length2;

    char *s = malloc((total_length + 1) * sizeof(char));

    if (s == NULL)
        return NULL;

    int i, j;

    /* Copy the content of s1 to the new memory */
    for (i = 0; i < length1; i++)
    {
        s[i] = s1[i];
    }

    /* Copy the content of s2 to the new memory */
    for (j = 0; j < length2; j++)
    {
        s[i + j] = s2[j];
    }

    /* Null-terminate the concatenated string */
    s[total_length] = '\0';

    return s;
}
