#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t i = 1;

	for (; h -> len != 0; i++)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			 printf("[%d] %s\n",h -> len, h -> str);
		}
		  if (h -> next == NULL)
		  {
			return (i);
		  }
                  h = h -> next;
	}
	return (i);
}
