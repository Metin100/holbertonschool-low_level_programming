#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int** ptr;
        int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int**) malloc(height * sizeof(int *));

	if (!ptr)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);

			free(ptr);

			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
