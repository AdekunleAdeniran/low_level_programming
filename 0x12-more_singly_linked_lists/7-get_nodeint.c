#include "lists.h"
/**
 * get_nodeint_at_index - function to return index of node
 * @index: index of node to be returned
 * @head: pointer to head of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int count;

	if (head == NULL)
		return NULL;
	count = 0;
	while (head != NULL)
	{
		if (index == count)
		{
			temp = head;
			return (head);
		}
		count ++;
		head = head->next;
	}
	return (NULL);
}
