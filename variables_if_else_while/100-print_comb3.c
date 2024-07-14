#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */

int main(void)
{
	char a[10] = {"0123456789"};
	char b[10] = {"0123456789"};
	unsigned long int i, j;

	for (i = 0; i < sizeof(a); i++)
	{
		for (j = i + 1; j < sizeof(b); j++)
			{
					putchar(a[i]);
					putchar(b[j]);
					if (i < 8)
					{
						putchar(',');
						putchar(' ');
					}
			}
	}
	putchar('\n');
	return (0);
}
