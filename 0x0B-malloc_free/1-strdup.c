#include "main.h"

/**
 * _strdup : function returns a pointer to a new string which is a duplicate of the string str
 * @str : string
 * Returns : a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 */

char *_strdup(char *str)
{
	char *c;

	c = maloc(sizeof(str));
	c = str;

	if (str == NULL)
		return (NULL);
	else
		return (c);
}
