#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (tmp != NULL)
	{
		tmp->prev = new;
	}

	*head = new;
	return (*head);
}
