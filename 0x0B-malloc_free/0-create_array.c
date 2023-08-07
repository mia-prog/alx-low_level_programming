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
	int i;
	char array;

	if(size == 0)
		return NULL;
	else
	{
		for(i = 0; i < size; i++)
		{
			char[i] = c;
		}
		return(c);
	}
}
