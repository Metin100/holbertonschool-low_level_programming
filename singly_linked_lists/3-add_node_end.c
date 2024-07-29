#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *last_node;
	int i = 0;

	tail = malloc(sizeof(list_t));

	if (!tail)
	{
		free(tail);
		return (NULL);
	}

	tail->str = strdup(str);

	if(tail->str == NULL)
	{
		free(tail);
		return (NULL);
	}

	while(str[i] != '\0')
	{
		i++;
	}

	tail->len = i;
	tail->next = NULL;

	if(*head == NULL)
	{
		*head = tail;
		return(*head);
	}

	last_node = *head;

	while(last_node -> next != NULL)
			last_node = last_node -> next;

	last_node -> next = tail;

	return tail;
}
