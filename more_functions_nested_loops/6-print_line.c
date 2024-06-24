#include "main.h"

void print_line(int n)
{
	int k = n;

	if (k > 0)
	{
		for (; k > 0 ; k--)
		{
			 _putchar('_');
		}
	}
	_putchar('\n');
}
