#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: a parameter
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
