#include "lists.h"

/**
 * *add_nodeint_end - function to add node from top
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: Always successful
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *top = NULL;
	listint_t *temp = NULL;

	top = malloc(sizeof(listint_t));
	if (top == NULL)
		return (NULL);
	top->n = n;
	if (*head == NULL)
	{
		*head = top;
		top->next = NULL;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = top;
	top->next = NULL;

	return (*head);
}
