#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
