#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *memory, i = 0;
	
	if (min > max)
		return (NULL);

	while (min <= max)
	{
		min++;
		i++;
	}
	
	memory = malloc(sizeof(int)* i);

	if (!memory)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		memory[i] = min;
		min++;
	}

	return (memory);

}
