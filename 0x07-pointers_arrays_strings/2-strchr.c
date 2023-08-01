#include "main.h"
/**
 * _strchr: locates a character in a string
 * @s: pointer to a string
 * @c: pointer to a caracter
 * Returns: a pointer to the first occurrence of the caracter c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (s[i]);
}
