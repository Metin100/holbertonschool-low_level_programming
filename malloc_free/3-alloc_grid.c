#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers.
*@width: width of the array.
*@height: height of the array.
*
*Return: pointer of an array of integers
*/


int **alloc_grid(int width, int height)
{
	int i,j;
	int* ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++){

		ptr[i] = malloc(width * sizeof(int));

		if (!ptr)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);

			return NULL;
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
