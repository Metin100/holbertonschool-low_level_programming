#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a list.
 * @head: node.
 * Return: sum of the values in node.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
