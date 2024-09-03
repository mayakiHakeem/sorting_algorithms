#include "sort.h"

/**
 * insertion_sort_list - sorting a doubly linked list with insertion sort
 * @list: doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	/*move key to second node*/
	current = (*list)->next;
	while (current)
	{
		temp = current;
		while (temp->prev && temp->prev->n > temp->n)
		{
			swap_nodes(list, temp->prev, temp);
			print_list(*list);
		}
		current = current->next;
	}
}

/**
 * swap_nodes - swap 2 nodes of @list
 * @list: list to swap nodes of
 * @a: node to swap
 * @b: node to swap
 */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	else
		*list = b;

	if (b->next)
		b->next->prev = a;

	a->next = b->next;
	b->next = a;
	b->prev = a->prev;
	a->prev = b;
}
