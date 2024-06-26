#include "main.h"

void print_rev(char *s)
{
	int index;

	for(index = sizeof(s) + 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
