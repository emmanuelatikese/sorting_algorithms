#include "sort.h"
/**
 * insertion_sort_list - this is an insertion sorting
 *
 * @list: this is a list of nodes
 *
 * Returns: nothing or void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current)
	{
		tmp = current->prev;
		while (tmp != NULL && tmp->n > current->n)
		{
			tmp->next = current->next;
			if (current->next != NULL)
				current->next->prev = tmp;
			current->prev = tmp->prev;
			if (tmp->prev != NULL)
				tmp->prev->next = current;
			else
				*list = current;
			tmp->prev = current;
			current->next = tmp;
			print_list(*list);
			tmp = current->prev;
		}
		current = current->next;
	}
}
