#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds he firstocuurence of the substring needle
 * in the string haystack
 * @haystack: parameter for haystack
 * @needle: parameter for needle
 * Return: pointer to the beginnig of the located substring
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}
