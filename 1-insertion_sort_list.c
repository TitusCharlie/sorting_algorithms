#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	if (!(*list)->next || !(*list))
		return;
	while ((*list)->next)
	{
		temp = (*list)->next;

		while ((*list)->prev && (*list)->next->n < (*list)->prev->next->n)
		{
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (!temp->prev)
				(*list) = temp;
			print_list(*list);
		}
		(*list)->next = (*list)->next->next;
	}
}
