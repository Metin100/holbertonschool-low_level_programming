#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	while(str[i]!= '\0')
	{
		i++;
	}
	new -> str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	
	new -> len = i;
	new -> next = *head;
	
	*head = new;

	return *head;
}
