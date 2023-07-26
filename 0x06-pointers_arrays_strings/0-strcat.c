#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: param pointer to char
 * @src: param pointer to char
 * Return: value of dest
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
