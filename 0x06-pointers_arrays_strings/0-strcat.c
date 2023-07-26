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
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;
	
	while (src[i] != '\0')		
	{
		dest[j] = src[i];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
