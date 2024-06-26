#include "main.h"

void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0' && str[length + 1] != '\0'; length++)
	{
		continue;
	}
	
	length = length + 1;

	if (length % 2 == 0)
	{
		for (i = length / 2; i <= length; i++)
		{
			_putchar(*str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2; i <= length; i++)
                {
                        _putchar(*str[i]);
                }
	}
	_putchar('\n');
}
