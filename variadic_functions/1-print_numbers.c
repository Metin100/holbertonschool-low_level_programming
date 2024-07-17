#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

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
		printf("%d",va_arg(ap, int));
		i++;
	}

	printf("\n");

	va_end(ap);
}

