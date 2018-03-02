#include "lists.h"
/**
 * *add_node - function to add node to start
 * @head: pointer to pointer of list_t struct type
 * @str: pointer to string input
 * Return: Always Successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	unsigned int counter;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	temp->len = counter;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
