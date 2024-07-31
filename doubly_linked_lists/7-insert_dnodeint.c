#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	unsigned int i = 0;
	
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	prev_node = *h;
	if (!prev_node)
	{
		prev_node = new_node;
		prev_node->next = NULL;
		prev_node->prev = NULL;
		return (prev_node);	
	}
	while (i != (idx - 1) && prev_node != NULL)
	{
		prev_node = prev_node->next;
		i++;
	}
	if (!prev_node)
	{	
		return (NULL);
	}
	next_node = prev_node->next;

	new_node->prev = prev_node;
	prev_node->next = new_node;
	next_node->prev = new_node;
	new_node->next = next_node;

	return (new_node);
}
