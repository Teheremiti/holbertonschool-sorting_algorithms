#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tprev = NULL;
	listint_t *head = NULL;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	head = *list;
	while (head)
	{
		while (head->prev && head->n < head->prev->n)
		{
			tprev = head->prev;
			if (tprev->prev)
				tprev->prev->next = head;
			head->prev = tprev->prev;
			if (head->next)
				head->next->prev = tprev;
			tprev->next = head->next;
			head->next = tprev;
			tprev->prev = head;
			if (head->prev == NULL)
				*list = head;
			print_list(*list);
		}
		head = head->next;
	}
}
