#include <stdio.h>
#include <stdlib.h>

/**
*main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int sum = 1, i;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; argv[i]; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}


	return (0);
}
