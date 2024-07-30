#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of  list.
 * @h: nodes.
 * Return: the number of nodes.
 *
 */

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
