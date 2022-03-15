#include "main.h"
#include <stdio.h>
/**
 * _abs - function prints out the absolute value of a number
 *  @i: an integer representing a number
 *  Return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
		return (i);
}
