#include "lists.h"
/**
 * get_dnodeint_at_index - function to get the node at index
 * @head: pointer of dlistint_t type to head of list
 * @index: unsigned int type for number of index
 * Return: node at inded if successful, NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
		{
			temp = head;
			return (temp);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
