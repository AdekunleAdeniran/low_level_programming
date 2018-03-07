#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node at nth location
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: always successful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *temp = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node ==  NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp != NULL)
	{
		while (count < (idx - 1))
		{
			count++;
			temp = temp->next;
			if (temp == NULL)
			{
				free(node);
				return (NULL);
			}
		}
		node->next = temp->next;
		temp->next = node;
		return (node);
	}
	return (NULL);
}
