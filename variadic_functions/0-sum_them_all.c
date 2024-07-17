#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all - function sum of all its parameters
*@n: the number of arguments the function will take
*@...: indicates that the function can
*take any number of arguments
*Return: return all number sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned long int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
