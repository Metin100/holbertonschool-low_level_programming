#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"


void free_list(list_t *head)
{
	list_t *tmp;
	while(head -> next != NULL)
	{
		tmp = head;
		free(head);
		head = tmp -> next;
	}
	free(head);
}	
