#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: header node of singly linked list
 * Return: free memory
 */

void free_list(list_t *head)
{
	list_t *current_node;
	list_t *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node  = next_node;
	}
}
