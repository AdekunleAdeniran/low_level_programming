#include "lists.h"

/**
 * add_dnodeint - function to add node at the head of a doubly linked list
 * @head: double pointer of dlistint_t type to head of list
 * @n: int of const type for data inside list
 * Return: doubly linked list if successful or NULL if unsuccessful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));


	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	temp = *head;
	node->next = temp;
	temp->prev = node;
	*head = node;
	return (node);
}
