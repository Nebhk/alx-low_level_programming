#include "main.h"
/**
* _isupper - checks if a character is upper 
* @c: and integer to check the value of a character
* Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 32 && c <= 126)
	{
	return (0);
	}
	else 
        return (1);
}
