#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - function that prints strings, followed by a new line
*@separator: is the string to be printed between strings
*@n: is the number of integers passed to the function
*@...: indicates that the function can
*take any number of arguments
*Return: return prints strings, followed by a new line
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);

	while (i < n)
	{
		str = va_arg(ap, char*);

		if (!str)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
