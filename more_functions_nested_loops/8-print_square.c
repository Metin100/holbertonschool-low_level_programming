#include "main.h"

/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/

void print_square(int size)
{
	int k, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
