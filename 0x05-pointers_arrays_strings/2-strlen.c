#include "main.h"
#include <stdio.h>

/**
 * _strlen : returns char length
 * @s : string 
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
