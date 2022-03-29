#include "main.h"
/**
 * _memset - a function that writes files
 * @s: parameter for the array
 * @b: paramemter for the values in the array
 * @n: parameter for the nmber of times to print the new char
 * 
 * Return: a pointer to the memory areas s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
