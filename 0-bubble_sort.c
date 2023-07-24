#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: Nothing!
 */

void bubble_sort(int *array, size_t size)
{
	size_t index;
	int swap_holder, count;

	if (!array || size <= 0)
		return;

	do{
		count = 0;

		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				count = 1;
				swap_holder = array[index];
				array[index] = array[index + 1];
				array[index +1] = swap_holder;
				print_array(array, size);
			}
		}
	}while (count == 1);
}
