#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *top = NULL;
	int value = 0;

	top = *head;
	value = top->n;
	*head = top->next;
	free(top);
	return (value);
}
