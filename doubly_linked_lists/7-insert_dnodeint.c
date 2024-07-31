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
	dlistint_t *prev_node = *h;
	unsigned int i = 1;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	
	else
	{
		while (prev_node != NULL)
		{
			if (i == idx)
			{
				if (prev_node->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->prev = prev_node;
						new_node->next = prev_node->next;
						prev_node->next->prev = new_node;
						prev_node->next = new_node;
					}
				}
				break;
			}
			prev_node = prev_node->next;
			i++;
		}
	}
	return (new_node);
}
