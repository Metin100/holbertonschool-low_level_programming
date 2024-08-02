#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function converts binary number to int.
 * @b: input binary number.
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len_b = 0;
	unsigned int index = 0;
	unsigned int c;
	unsigned int x;
	unsigned int k;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (b[len_b] != '\0')
		len_b++;
	len_b = len_b - 1;
	while (b[index] != '\0')
	{
		c = len_b - index;
		if (b[index] == '0')
		{
			x = 1, k = 0;
			while (k < c)
			{
				x = 2 * x, k++;
			}
			result += 0 * x;
		}
		else if (b[index] == '1')
		{
			x = 1, k = 0;
			while (k < c)
			{
				x = 2 * x, k++;
			}
			result += 1 * x;
		}
		else
			return (0);
		index++;
	}
	return (result);
}
