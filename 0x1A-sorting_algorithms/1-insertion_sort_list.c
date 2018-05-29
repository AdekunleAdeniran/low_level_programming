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
	listint_t *cNode, *pNode, *nextNode;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	cNode = (*list)->next;
	nextNode = cNode->next;
	while (cNode)
	{
		if (cNode->n < cNode->prev->n)
		{
			pNode = cNode->prev;
			while (pNode && (cNode->n < pNode->n))
			{
				if (!(pNode->prev))
				{
					pNode->prev = cNode;
					cNode->prev->next = cNode->next;
					if (cNode->next)
						cNode->next->prev = cNode->prev;
					cNode->next = pNode;
					cNode->prev = NULL;
					*list = cNode;
				}
				else
				{
					cNode->prev->next = cNode->next;
					if (cNode->next)
						cNode->next->prev = cNode->prev;
					pNode->prev->next = cNode;
					cNode->prev = pNode->prev;
					pNode->prev = cNode;
					cNode->next = pNode;
				}
				print_list(*list);
				pNode = cNode->prev;
			}
		}
		cNode = nextNode;
		cNode ? (nextNode = cNode->next) : (nextNode = NULL);
	}
}
