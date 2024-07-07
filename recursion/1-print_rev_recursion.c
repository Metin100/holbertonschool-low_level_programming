#include "main.h"

void _print_rev_recursion(char *s)
{
	int i = 0;

	for (; s[i]; i++)
		;

	if (i < 0)
		_putchar('\n');

	else
	{
		_putchar(s[i - 1]);
		_print_rev_recursion(s[i] - 1);
	}
}
