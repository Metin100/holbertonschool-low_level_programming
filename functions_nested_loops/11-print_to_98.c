#include "main.h"

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
		printf("%d, ",n);
		n--;
		}
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ",n);
			n++;
		}
	}
}
