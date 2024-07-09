#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
	char *k;

	if (str == NULL)
		return (NULL);

	unsigned int i;

	for (i = 0; str[i]; i++)
			;

	k = malloc(sizeof(char) * i);

	if (k == NULL)
		return (NULL);

	for (i = 0; k[i]; i++)
	{
		*k[i] = str[i];
	}

	return (k);
}
