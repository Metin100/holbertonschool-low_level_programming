#include "main.h"

void print_most_numbers(void)
{
	int k;

	for(k = 0;k < 10; k++)
	{
		if(k != 2 && k != 4)
		{
			_putchar(k + '0');
		}
	}
	_putchar('\n')
}
