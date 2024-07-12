#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - allocate memory with malloc
*@b:unsigned int type
*Return: return pointer
*
*/

void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (!c)
		exit (98);

	return (c);
}
