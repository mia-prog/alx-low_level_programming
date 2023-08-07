#include "main.h"
#include <stdlib.h>

/**
 * _strdup : function returns a pointer to a new string which is a duplicate of the string str
 * @str : string
 * Returns : a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 */

char *_strdup(char *str)
{
	char *c;
	int i = 0;

	c = malloc(sizeof(str));

	if (str == NULL || c == NULL)
		return (NULL);
	else
	{
		while (str[i] != '\0')
			c[i] = str[i];
	}
	return (c);
}
