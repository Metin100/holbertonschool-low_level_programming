#include <unistd.h>
/**
 * _putchar - Prints a character to stdout followed by a newline
 * @c: The character to be printed
 *
 * Description: This function prints the character @c to the standard output
 * (stdout), followed by a newline character '\n'.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
