#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (!memory)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		memory[i] = '0';
	}

	memory[i] = '\0';

	return (memory);
	
}
