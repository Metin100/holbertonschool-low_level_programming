#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while dest[i++]
		length++;

	for (i = 0; src[i]; i++)
	{
		dest[length++] = src[i];
	}

	return (dest);
}
