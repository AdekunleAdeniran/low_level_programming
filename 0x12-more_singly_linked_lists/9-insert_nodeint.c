#include "lists.h"
/**
 * listint_len - function to print all elements
 * @h: listint_t type of node struct
 * Return: Always successful
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

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
	if (node==  NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	if (idx <= listint_len(*head))
	{
		temp = *head;
		while (count < (idx - 1))
		{
			count++;
			temp = temp->next;
		}
		node->next = temp->next;
		temp->next = node;
	}
	return (NULL);
}
