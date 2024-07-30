#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: header node of singly linked list
 * Return: A number of nodes
 */
size_t print_list(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			c++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			c++;
		}
	}
	return (c);
}
