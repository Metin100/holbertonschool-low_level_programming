#include "main.h"

/**
* swap_int- function that swaps the values of two integers
* @a: this is the first entry
* @b: this is the second entry
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
