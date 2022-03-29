#include "main.h"
/**
 * _memcpy - copies n byters from the memory area of src
 * to memory area of dest
 * @src: source code to copy
 * @dest: parameter for destination to copy
 * @n: the number of bytes to copy
 * Return: dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
