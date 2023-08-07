#include "main.h"
#include <stdlib.h>

/**
 * create_array : creats array of char
 * @size : size of the array
 * @c : storage char
 * Return : pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(c) * size);
	if (array == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
