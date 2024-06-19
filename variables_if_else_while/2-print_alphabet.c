#include <stdio.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar (n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
