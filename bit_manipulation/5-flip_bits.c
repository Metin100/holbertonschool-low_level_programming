#include "main.h"
#include "2-get_bit.c"

/**
 * flip_bits - function returns the num of bits need to flip to get same number
 * @n: first number.
 * @m: second number.
 * Return: count of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned int flip = 0;

	while (i < 64)
	{
		if (get_bit(n, i) != get_bit(m, i))
			flip++;

		i++;
	}


	return (flip);
}
