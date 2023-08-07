#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Concatinates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatination.
 */

char *str_concat(char *s1, char *s2)
{
	int length = 0;
	int length1 = 0;
	int length2 = 0;
	char *s;

	length1 = strlen(s1);
	length2 = strlen(s2);
	length = length1 + length2;

	s = malloc((length + 1) * sizeof(char));
	for (int i = 0; i < length1; i++)
	{
		s[i] = s1[i];
	}

	for (int i = 0; i < length2; i++)
	{
		s[length1 + i] = s2[i];
	}

	s[length1 + length2] = '\0';

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	else
		return (s);
}
