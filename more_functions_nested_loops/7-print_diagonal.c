#include "main.h"

void print_diagonal(int n)
{
	int k;

	if(n > 0)
	{
		for (k = 0; k < n ; k++)
		{
			_putchar(' ');
			if (k == (n - 1))
			{
				_putchar('\\');
			}
		}
	}
}
