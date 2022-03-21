#include "main.h"

/**
 * swap_int - swaps the value of the two variables
 * @a: the first variable
 * @b: the secon variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
