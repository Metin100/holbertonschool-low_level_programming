#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
	char *begin, *end = str;

	int a, length;

	for (a = 0; str[a] != '\0' && str[a + 1] != '\0'; a++)
        {
                end++;
        }
	length = a + 1;
	begin = str;

	for (a = 0; a < length / 2; a++)
	{
		_putchar(begin);
		*begin += 2;
	}
}
