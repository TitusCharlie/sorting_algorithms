#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	long unsigned int i;
	listint_t *temp, *current, *swap;

	if (sizeof(*list) < 2 || !(*list))
		return;
	for (i = 0; i < sizeof(*list); i++)
	{
		current = (*list)->next;
		temp = current->next;

		while ((current != NULL) && temp < current)
		{
			swap = temp;
			temp = current;
			current = swap;
			print_list(*list);
			current = current->prev;
		}
		print_list(*list);
	}
}


	     
	  


