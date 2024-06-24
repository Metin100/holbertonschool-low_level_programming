#include "main.h"

void print_square(int size)
{
	int k,j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size-1; k++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
