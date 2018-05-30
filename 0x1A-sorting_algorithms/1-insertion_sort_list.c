#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - C function to insert node via sort
 * @list: Double pointer to list of struct listint_t type
 * Return: Return sorted list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cNode = NULL, *pNode = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	cNode = *list;
	while (cNode != NULL)
	{
		pNode = cNode;
		while (pNode->prev != NULL && pNode->n < pNode->prev->n)
		{
			pNode->prev->next = pNode->next;
			if (pNode->next != NULL)
				pNode->next->prev = pNode->prev;
			pNode->next = pNode->prev;
			pNode->prev = pNode->prev->prev;
			pNode->next->prev = pNode;
			if (pNode->prev == NULL)
				*list = pNode;
			else
				pNode->prev->next = pNode;
			print_list(*list);
		}
		cNode = cNode->next;
	}
}
