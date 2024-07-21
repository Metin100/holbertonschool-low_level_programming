#include <stdio.h>
#include <function_pointers.h>

int main(int argc, char* argv[])
{
	int a, i = 0;

	if (argv != 2)
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

		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
