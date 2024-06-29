#include "main.h"

/**
*_strncpy - Write a function that copies a string, with number of bytes
*@dest:This is the output dest
*@src:this is the input source
*@n:this is the number of bytes to copy
*
*Return: Copied string with the number of bytes
*/

//we use first loop for copying n symbol from src to dest 
//But we need \0 for ending our string
//so second loop works on this purpose


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
