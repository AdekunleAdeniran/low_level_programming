#include "lists.h"
/**
 * sum_dlistint - function to sum the elements of a doubly linked list
 * @head: pointer of type dlistint_t to head of list
 * Return: sum of all elements in a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
