#include "main.h"

/**
* print_diagonal - prints a diagonal
* @n:parameter
* Return:returns nothing
*/

void print_diagonal(int n)
{
	int k,j;

	if(n > 0)
	{
		for (k = 1; k <= n ; k++)
		{
			for (j = 1; j < k; j++)
			
				_putchar(' '); 
			
			_putchar('\\');

			if (k == (n - 1))
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
