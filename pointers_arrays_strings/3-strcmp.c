#include "main.h"

/**
*_strcmp - write a function that compares two strings.
*
*@s1: this is the input string
*@s2: this is the input string
*
* Return: if the strings are equals return "0", if not return other number
*/


int _strcmp(char *s1, char *s2)
{
	for (; (*s1 && *s2) && (*s1 == *s2); s1++, s2++)
		;

	if (*s1 == *s2)
	{
		return (0);
	}

	return (*s1 - *s2);
}
