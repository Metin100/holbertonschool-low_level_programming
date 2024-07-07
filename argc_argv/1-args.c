#include <stdio.h>

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;
	for (i = 0; argv[i]; i++)
		;

	printf("%d\n",i);
}
