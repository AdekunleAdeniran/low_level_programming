#include "lists.h"
/**
 * delete_nodeint_at_index - functioon to delete node at nth  position
 * @head: pointer to head
 * @index: point of node deletion
 * Return: Always successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp1;
	unsigned int count =  0;

	if (head  == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (count != (index - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
			return (-1);
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);
}
