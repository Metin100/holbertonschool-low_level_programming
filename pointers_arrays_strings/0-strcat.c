#include "main.h"

/**
*_strcat - concatenates  the string pointed to by @src to
*the end of the string pointed to by @dest
*@dest: String that will be appended
*@src: String to be concatenated upon
*
*Return: returns poiner to @dest
*/


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
