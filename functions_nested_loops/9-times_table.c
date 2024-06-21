#include "main.h"

void times_table(void)
{
	int a, c;
	for (a = 0; a <= 9 ; a++)
	{
		for(c = 0; c <= 9; c++)
		{
			char k = a * c;
			_putchar(k);
		}
		_putchar('\n');
	}
}
