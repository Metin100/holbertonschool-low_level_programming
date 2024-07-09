#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
		return (NULL);

	k = malloc(sizeof(char) * size);

	if (k == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		k[i] = c;
	}
		return (k);
}
