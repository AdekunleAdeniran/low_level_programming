#include "lists.h"
/**
 * free_listint - function to free heap
 * @head: pointer to struct of listint type
 * Return: always successful
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
