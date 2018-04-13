#include "lists.h"
/**
 * dlistint_len - function to print the length of a doubly linked list
 * @h: pointer of const dlistint_t type
 * Return: return the length of the doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
