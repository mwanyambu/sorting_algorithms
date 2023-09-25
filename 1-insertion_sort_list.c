#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: pointer to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *tail, *tmp;

	if (!list || !*list)
		return;

	tail = (*list);
	head = (*list)->next;

	while (head)
	{
		while (tail && head->n < tail->n)
		{
			if (tail->prev)
			{
				tail->prev->next = head;
			}
			else
			{
				*list = head;
			}
			if (head->next)
			{
				head->next->prev = tail;
			}
			tmp = head->next;
			head->next = tail;
			head->prev = tail->prev;
			tail->next = tmp;
			tail->prev = head;
		}
		head = head->next;

		if (head)
		{
			tail = head->prev;
		}
	}
}
