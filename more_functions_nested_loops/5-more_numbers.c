#include "main.h"

void more_numbers(void)
{
	int k , i;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			if ( i > 9 )
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0')
		}
	}
	_putchar('\n');
}
