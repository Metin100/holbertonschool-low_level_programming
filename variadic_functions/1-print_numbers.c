#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_numbers - function that prints numbers, followed by a new line
*@separator: is the string to be printed between numbers
*@n: is the number of integers passed to the function
*@...: indicates that the function can
*take any number of arguments
*Return: return prints numbers, followed by a new line
*
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	separator = (separator != NULL) ? separator : "";

	va_start(ap, n);
	while (i < n)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
		i++;
	}

	printf("\n");

	va_end(ap);
}

