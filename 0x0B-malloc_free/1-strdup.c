#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to c, or NULL if failure.
 */
char *_strdup(char *str)
{
	char *c;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	c = malloc((length + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);


	for (i = 0; i <= length; i++)
		c[i] = str[i];

	return (c);
}
