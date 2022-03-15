#include "main.h"
/**
 * checks if a character is in lowercare
 *
 * Return 1 if c is lowercare
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

