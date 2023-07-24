#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0;
	int i;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
