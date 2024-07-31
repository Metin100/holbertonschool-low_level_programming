#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a function deletes the node at index in list.
 * @head: node.
 * @index: index.
 * Return: 1 if it succeeded, -1 if it failed.
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int c = 0;

	tmp = *head;
	if (!tmp)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next, (*head)->prev = NULL, free(tmp);
		return (1);
	}
	else
	{
		while (tmp != NULL)
		{
			if (c == index)
			{
				if (tmp->next == NULL)
				{
					tmp->prev->next = NULL, free(tmp);
					return (1);
				}
				else
				{
					tmp->prev->next = tmp->next, tmp->next->prev = tmp->prev, free(tmp);
					return (1);
				}
			}
			c++, tmp = tmp->next;
		}

	}
	return (-1);
}
