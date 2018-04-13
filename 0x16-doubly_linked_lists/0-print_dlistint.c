#include "lists.h"

/**
 * print_dlistint - function to print the elements of a doubly linked list
 * @h: pointer of const dlistint_t type
 * Return: return list and number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
