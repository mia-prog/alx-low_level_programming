#include "main.h"
#include <stdio.h>
/**
 * _puts : prints a string
 * @str : pointer to string
 * Return : void
 */ 

void _puts(char *str)
{       
	int i;
        
        while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
