#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int len_b = 0;
	unsigned int index = 0;
	unsigned int c;
	double x;
	unsigned int result = 0;

	if(b == NULL)
		return (0);
	while (b[len_b] != '\0')
		len_b++;
	len_b = len_b - 1;

	while (b[index] != '\0')
	{
		c = len_b - index;
		if (b[index] == '0')
		{
			x = pow(2, c);
			result += 0 * x;
		}
		else if(b[index] == '1')
		{
			x = pow(2, c);
			result += 1 * x;
		}
		else
		{
			return (0);
		}
		index++;
	}
	return (result);
}
