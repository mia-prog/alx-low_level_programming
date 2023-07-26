#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat : concatenate two strings
 * @dest : input of first string
 * @src : input of second string
 * Returns : the concatination of 2 strings
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int destLength = strlen(dest);
	int j = destLength;

	while (src[i] != '\0')		
	{
		*dest[j] = *src[i];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
