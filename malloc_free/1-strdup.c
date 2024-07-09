#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
	char *k;
	int i, len = 0;

	if (str == NULL)
		return (NULL);


	while (str[len])
	{
		len++;
	}

	k = malloc(sizeof(char) * (len + 1));

	if (k == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		k[i] = str[i];
	}

	return (k);
}
