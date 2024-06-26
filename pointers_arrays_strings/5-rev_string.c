#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	char *begin , *end = s;

	int i , length;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}

	begin = s;
	length = i + 1;

	for (i = 0; i < length / 2 ; i++)
	{
		char tmp;
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}
