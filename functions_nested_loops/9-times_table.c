#include "main.h"

void times_table(void)
{
	int mult, dmp, count;
	for (count = 0; count <= 9; count++)
	{
		_putchar('0');
		for (mult = 1;mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			
			dmp = mult * count;

			if (dmp <= 9)
				_putchar(' ');
			else 
				_putchar((dmp / 10) + '0');

			_putchar((dmp % 10) + '0');
		}
		_putchar('\n');
	}
}
