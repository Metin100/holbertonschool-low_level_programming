#include <stdlib.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	char *k;
        int start = 0, end1, end2, end;

	if (s1 == NULL || s2 == NULL)
		return (NULL);


	while (s1[start])
		start++;

	end1 = start;
	start = 0;

	while (s2[start])
		start++;

	end2 = start;

	end = end1 + end2;

	k = malloc(sizeof(char) * end);

	if (k == NULL)
		return (NULL);

	start = 0;

	while (start <= end)
	{
		if (start <= end1)
		{
			k[start] = s1[start];
		}
		else if (start >= end1)
		{
			k[start] = s2[start];
		}
	}
	return (k);
}
