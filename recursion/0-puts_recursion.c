#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s < '\0')
	{
		printf("%s", *s);
		_puts_recursion(s++);
	}
}
