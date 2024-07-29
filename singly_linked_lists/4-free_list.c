#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"


void free_list(list_t *head)
{
	while(head -> next != NULL)
	{
		free(head->str);
		free(head->len);
		free(head);
		head = head -> next;
	}
	free(head);
}	
