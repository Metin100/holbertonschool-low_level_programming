#include "main.h"

void times_table(void)
{
	int a, c;
	for (a = 0; a <= 9 ; a++)
	{
		for(c = 0; c <= 9; c++)
		{
			_putchar(a*c);
		}
		_putchar('\n');
	}
}
