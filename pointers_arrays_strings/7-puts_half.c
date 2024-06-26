#include "main.h"

void puts_half(char *str)
{
	int half, i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	half = i / 2;

	if (i % 2 == 1)
	{
		half++;
	}

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
