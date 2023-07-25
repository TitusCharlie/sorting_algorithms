#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	int count;
	listint_t index;

	if (!list->n || sizeof(list->n) < 2)
		return;

	do {
		count = 0;

		for (index = 0; index < sizeof(list->n); index++)
		{
			if (list->n[index] > list->n[index +1])
			{
				count = 1;

				swap_holder = list->n[index];
				list->n[index] = list->n[index + 1];
				list->n[index] = swap_holder;
				print_list(list);
	}while count == 1;

}
