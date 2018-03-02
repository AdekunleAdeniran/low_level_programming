#include "lists.h"

/**
 * free_list - function to free nodes
 * @head: pointer to nodes
 * Return: Always Successful
 */
void free_list(list_t *head)
{
	list_t *temp;
	unsigned int count;
	if (head == NULL)
		return;
	count = 0;
	temp = head;
	while (temp->next != NULL )
	{
		free(temp);
		temp = temp->next;
		count++;
	}
	free(head);
}
