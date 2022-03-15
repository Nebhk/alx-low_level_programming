#include "main.h"
/**
 * _islower - fuction checks if a character is in lowercare
 * @c: is th int that will use for the argument of the function
 * Return: 1 if c is lowercare
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

