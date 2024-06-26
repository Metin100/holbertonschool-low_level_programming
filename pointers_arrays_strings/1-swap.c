#include "main.h"

void swap_int(int *a, int *b)
{
	int c = a;
	*b = a;
	*a = c;
}
