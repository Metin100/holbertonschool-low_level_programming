#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *k;
	k = malloc(sizeof(char)*size);

	if (size == 0)
	{
		return NULL;
	}
	else if (size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			k[i] = c;
		}
		return k;
	}
	return NULL;
}
