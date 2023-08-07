#include "main.h"
#include <stdlib.h>

/**
 * create_array : creats array of char
 * @size : size of the array
 * @c : storage char
 * return : pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	if (cr == NULL)
                        return (NULL);
	else
	{
		array = malloc(sizeof(c) * size);
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
