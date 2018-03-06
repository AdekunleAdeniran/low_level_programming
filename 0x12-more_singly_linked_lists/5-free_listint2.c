#include "lists.h"

/**
 * free_listint2 - function to free memory  used
 * @head: pointer to pointer of node struct type
 * Return: always successful
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
