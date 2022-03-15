#include "main.h"

/**
 * main -function to print
 *
 * Return: 0
 */
int main(void)
{
	char array_char[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(array_char); c++)
	{
		_putchar(array_char[c]);
	}
_putchar('\n');
return (0);
}
