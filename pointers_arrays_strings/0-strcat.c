#include "main.h"

/**
*_strcat - concatenates  the string pointed to by @src to
*the end of the string pointed to by @dest
*@dest: String that will be appended
*@src: String to be concatenated upon
*
*Return: returns poiner to @dest
*/

//We use first loop for define index of last symbol in dest which is our first side of text
//Second loop has 2 purposes
//1-taking symbol from src array
//2-admire symbol to end of the dest array

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
