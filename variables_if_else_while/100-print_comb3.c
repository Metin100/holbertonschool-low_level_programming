#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */

int main(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
			{
					putchar(i);
					putchar(j);
					if (i < '8')
					{
						putchar(',');
						putchar(' ');
					}
			}
	}
	putchar('\n');
	return (0);
}
