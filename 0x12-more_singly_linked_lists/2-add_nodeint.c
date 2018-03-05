#include "lists.h"
/**
 * *add_nodeint - function to add node from top
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: Always successful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *top = NULL;

	top = malloc(sizeof(listint_t));
	if (top == NULL)
		return (NULL);
	top->n = n;
	top->next = *head;
	*head = top;
	return (*head);
}
