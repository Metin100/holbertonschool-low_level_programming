#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;

		h = h->next;
	}

	return (i);
}
