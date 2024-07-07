#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s < '\0')
	{
		printf("%c", *s);
		s = s + 1;
		_puts_recursion(*s);
	}
}
