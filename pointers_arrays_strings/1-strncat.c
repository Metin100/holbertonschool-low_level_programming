#include "main.h"

/**
*_strncat - concatenate two strings but add inputted number of bytes
*@dest: string to be appended upon
*@src: string to be completed at end of dest
*@n:integer parameter to compare index to
*Return: returns new concatenated string
*/

//We use first loop for define index of last symbol in dest which is our first side of text
//Second loop has 2 purposes
//1-taking symbol from src array
//2-admire symbol to end of the dest array
//We are admiring n symbol of src to end of the dest

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
