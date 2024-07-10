#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int* ptr;
        int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc((width * height) + sizeof(int));

	if (!ptr)
		return (NULL);

	for (i = 0; i < width * height; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
