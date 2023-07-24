#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a : ponter to int
 * @b : pointer to int
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = &b;
	*b = n;
}
