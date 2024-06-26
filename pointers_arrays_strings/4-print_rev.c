#include "main.h"

void print_rev(char *s)
{
	int index;

	for(index = sizeof(s); index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
