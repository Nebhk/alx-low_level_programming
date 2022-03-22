#include "main.h"

/**
 * puts_half - length of string
 * @str: char
 */
void puts_half(char *str)
{
	int i, j;
	char l;
	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
	{
		for ((j = i / 2); str[j] != 0; j++)
		{ l = str[j];
			_putchar(l);
		}
	}
	else
	{
		for (( j = (i - 1) / 2); str[j] != 0; j++)
		{
			l = str[j];
			_putchar(l);
		}
	}
	_putchar('\n');
}
