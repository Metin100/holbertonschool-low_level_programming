#include "main.h"

void times_table(void)
{
	int a, c;
	for (a = 0; a <= 9 ; a++)
	{
		for(c = 0; c <= 9; c++)
		{
			int k = a * c;
			if (k < 10)
			{
				if (c != 9)
				{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				}
				else
				{
				_putchar(k + '0');
				}
			}
			else if (k >= 10)
			{
				if (c != 9)
                                {
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
					_putchar(',');
					_putchar(' ');
                                }
                                else
                                {
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				
			}
		}
		_putchar('\n');
	}
}
