#include "main.h"
/**
 * _strchr - returns a pointer to the first occcurence of the
 * character c in the strings s
 * @c: parameter for c to return
 * @s: string to search for a char
 * Return: pointer to first occurance of char c or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
