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

	while (s[count] != '\0')
		count++;
	

	for (begin = count - 1; begin >= 0; begin++)
	{
		_putchar(s[begin]);
		begin--;
	}




	/*while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}*/
}
