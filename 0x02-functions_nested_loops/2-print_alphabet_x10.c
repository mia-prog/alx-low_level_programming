#include "main.h"

/**
 *print_alphabet_x10 
 *-prints alphabet in lower_case followed by new line 10 time
 *return always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
