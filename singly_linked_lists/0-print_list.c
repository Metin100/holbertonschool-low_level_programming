#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_list - main
 * @h: our clone of struct
 * Return: count of node
 */


size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);

}
