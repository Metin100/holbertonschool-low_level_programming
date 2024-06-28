#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		res += (s1[i] - s2[i]);
	}
	return (res);
}
