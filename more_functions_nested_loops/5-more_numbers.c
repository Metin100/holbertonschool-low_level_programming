#include "main.h"

void more_numbers(void)
{
	int k , i;

	for (k = 0; k < 10; k++)
	{
		for(i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
