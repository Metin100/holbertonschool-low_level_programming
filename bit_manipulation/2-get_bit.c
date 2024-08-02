#include "main.h"

/**
 *  get_bit - returns the value of a bit at a given index.
 *  @n: given number
 *  @index: index
 *  Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
			return (n & 1);
		n = n >> 1;
		i++;
	}
	while (i < 64)
	{
		if (i == index)
			return (0);
		i++;
	}
	return (-1);
}
