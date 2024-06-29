#include "main.h"

/**
*_strcmp - write a function that compares two strings.
*
*@s1: this is the input string
*@s2: this is the input string
*
* Return: if the strings are equals return "0", if not return other number
*/

//we are searching different symbol between two arrays
//in the condition of loop (we are looking for null condition for both arrays) && (we are checking if symbol's are different or not)
//if both array is equal , we have to return value 0f 0
//if it isn't we have to find first different symbol and we have to exit their ascii codes

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
