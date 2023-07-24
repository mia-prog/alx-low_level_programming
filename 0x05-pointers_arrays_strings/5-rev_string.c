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
	char *r[];

	while (s[count] != '\0')
		count++;
	
	end = count - 1;

	for (begin = 0; begin < count; begin++)
	{
		*r[begin] = s[end];
		end--;
	}

	*s[] = *r[];
}
