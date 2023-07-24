#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0;
	int begin = 0;
	int end = 0;
	int i =0;
	char r[1000];

	while (s[count] != '\0')
		count++;
	
	end = count - 1;

	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}

	r[begin] = '\0';

	for (i = 0; i <= begin; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
