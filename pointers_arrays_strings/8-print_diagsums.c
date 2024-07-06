#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum = 0;
	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}

	printf ("%d ",sum);
	sum = 0;
	for (i = i - 1; i >= 0; i--)
	{
		for (j = j - 1; j >= 0; j--)
		{	
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf ("%d ",sum);

}
