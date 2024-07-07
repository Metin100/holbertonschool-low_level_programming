#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
	int sum = 1, i;

	if (argc <= 1)
	{
		printf("Error");
	}
	else
	{
		for (i = 1; argv[i]; i++)
		{
			sum = sum * atoi(argv[i]);
		}
	}

	printf("%d\n",sum);
}
