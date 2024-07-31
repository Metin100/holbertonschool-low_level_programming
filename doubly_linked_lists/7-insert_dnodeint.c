#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: node.
 * @idx: index which is we should add our new_node
 * @n: value.
 * Return: the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	unsigned int i = 0, len = 1;
	
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	prev_node = *h;
	while (prev_node != NULL)
	{
		len++;
		prev_node = prev_node->next;
	}
	prev_node = *h;
	if (idx > len)
	{
		return (NULL);
	}
	while (i != (idx - 1) && idx != 0)
	{
		prev_node = prev_node->next;
		i++;
	}
	next_node = prev_node->next;
	if (prev_node == *h)
	{
		*h = add_dnodeint(h, n);
		return (*h);
	}
	if (next_node == NULL)
	{
		return (add_dnodeint_end(&prev_node, n));
	}
	if (i < idx)

	new_node->n = n, new_node->prev = prev_node, prev_node->next = new_node, next_node->prev = new_node, new_node->next = next_node;

	return (new_node);
}
