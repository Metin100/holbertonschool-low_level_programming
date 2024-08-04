#include "main.h"
#include "2-get_bit.c"

/**
 *  *_pow - returns x pow y with recursion.
 *  *@n: given number
 *  *@index: pow number
 *  *Return: power of given numbe
 */

int _pow(int n, unsigned int index)
{
	if (index == 0)
	{
		return (1);
	}
	else
	{
		return (n * _pow(n, index - 1));
	}
}

/**
 * clear_bit - a function sets the value of a bit to 0 given index.
 * @n: value.
 * @index: index of value.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (get_bit(*n, index) == 1)
		*n = *n - _pow(2, index);

	return (1);
}
