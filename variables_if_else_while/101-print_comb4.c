#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */

int main(void)
{
	char a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{	
			for (c = b + 1; c <= '9'; c++)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');

	return (0);

}
