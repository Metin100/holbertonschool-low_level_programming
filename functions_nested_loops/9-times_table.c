#include "main.h"

void times_table(void)
{
	int a, c;
	for (a = 0; a <= 9 ; a++)
	{
		for(c = 0; c <= 9; c++)
		{
			int k = a * c;
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
