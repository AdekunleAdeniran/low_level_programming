#include "lists.h"
/**
 * sum_listint - function to sum int values of nodes
 * @head: pointer to head node
 * Return:  always successful
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
