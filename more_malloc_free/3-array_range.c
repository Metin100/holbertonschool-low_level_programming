#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *memory, i = 0;
	
	if (min > max)
		return (NULL);

	memory = malloc(sizeof(int)* (max - min + 1));

	if (!memory)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		memory[i] = min;
		min++;
	}

	return (memory);

}
