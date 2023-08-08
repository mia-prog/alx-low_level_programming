#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	int i, length = 0;
	char *str;
	unsigned int current_position;

	if (ac == 0 || av == NULL)
		return NULL;

	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;

	str = malloc(length * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return NULL;
	}

	current_position = 0;
	for (i = 0; i < ac; i++) 
	{
		strcpy(str + current_position, av[i]);
		current_position += strlen(av[i]);
		str[current_position] = '\n';
		current_position++;
	}

	return (str);
}

