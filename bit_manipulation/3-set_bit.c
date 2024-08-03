#include "main.h"
#include "2-get_bit.c"

/**
 * _pow - function that return power of n
 * @n : value
 * @index : power value
 * Return: power of n
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
 * set_bit -  function sets the value of a bit to given index.
 * @n : value.
 * @index : index of value
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (get_bit(*n, index) == 0)
	{
		*n = *n + _pow(2, index);
	}
	return (1);
}
