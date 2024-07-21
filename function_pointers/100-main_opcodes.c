#include <stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/

int main(int argc, char* argv[])
{
	int a, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(1);
	}

	while (i < a)
	{
		printf("%02hhx", *((char *)main + i));

		if (i < a - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
