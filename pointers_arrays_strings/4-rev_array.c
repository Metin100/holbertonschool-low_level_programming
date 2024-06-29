#include "main.h"

/**
*reverse_array - function that reverse content of array
*@a: array
*@n: number of elements
*/

//If we have to reverse our array , we should use loop until half of array.

void reverse_array(int *a, int n)
{
	int start = 0, end = n;
	int tmp;

	while (start < end / 2)
	{
		tmp = a[start];
		a[start] = a[n - 1];
		a[n - 1] = tmp;
		n--;
		start++;
	}
}
