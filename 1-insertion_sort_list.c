#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: pointer to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		tmp = current->next;

		while(current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;

			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (current->prev == NULL)
			{
				*list = current;
			}
			else
			{
				current->prev->next = current;
			}
			print_list(*list);
		}
		current = tmp;
	}
}
