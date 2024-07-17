#include <stdio.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f)(int,int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	c = f(a,b);

	printf("%d\n",c);
	return (0);
}
