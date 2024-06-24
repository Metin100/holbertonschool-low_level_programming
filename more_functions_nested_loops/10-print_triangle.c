#include "main.h"

/**
* print_triangle - prints a triangle
* @size:size parameter of triangle
* Return:returns nothing
*/
void print_triangle(int size)
{
	int setir, sutun;

	if (size > 0)
	{
		for (setir = 1; setir <= size; setir++)
		{
			for (sutun = 1; sutun <= size - setir; sutun++)
			{
				_putchar(' ');
			}
			for (; sutun <= size ; sutun++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
