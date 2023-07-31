#include "main.h"
/**
 * _memcpy :  copies memory area
 * @dest: destination
 * @src: memory area contines a string
 * @n: nomber of bites of a memory area
 * Return: a ponter to a memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
	}
	return (dest);
}
