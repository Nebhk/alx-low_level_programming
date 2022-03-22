#include "main.h"

/**
 * rev_strings - a function that revelses a string
 * @s: a parametr for string
 */
void rev_string(char *s)
{
	int f, r_s;
	char c;

	for (f = '\0'; s[f] != 0; f++)
	{
	}
	r_s = 0;
	for (f = f-1; r_s < f; r_s++)
	{
		c = s[f];
		s[f] = s[r_s];
		s[r_s] = c;
		f--;
	}
}

