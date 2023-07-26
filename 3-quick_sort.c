#include "sort.h"

/**
 * swap_items - Swaps the positions of two elements in an array
 * @arr: The array
 * @idx1: Index of the first element
 * @idx2: Index of the second element
 */
void swap_items(int *arr, ssize_t idx1, ssize_t idx2)
{
    int temp;

    temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

/**
 * lomuto_partition - Lomuto partition sorting scheme implementation
 * @arr: The array
 * @low: Starting index of the array
 * @high: Ending index of the array
 * @size: Size of the array
 * Return: The position of the last element sorted
 */
int lomuto_partition(int *arr, ssize_t low, ssize_t high, size_t size)
{
    int pivot = arr[high];
    ssize_t i = low - 1, j;

    for (j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            if (arr[i] != arr[j])
            {
                swap_items(arr, i, j);
                print_array(arr, size);
            }
        }
    }
    if (arr[i + 1] != arr[high])
    {
        swap_items(arr, i + 1, high);
        print_array(arr, size);
    }
    return i + 1;
}

/**
 * quick_sort_recursive - Quicksort algorithm implementation (recursive part)
 * @arr: The array
 * @low: Starting index of the array
 * @high: Ending index of the array
 * @size: Size of the array
 */
void quick_sort_recursive(int *arr, ssize_t low, ssize_t high, int size)
{
    ssize_t pi;

    if (low < high)
    {
        pi = lomuto_partition(arr, low, high, size);
        quick_sort_recursive(arr, low, pi - 1, size);
        quick_sort_recursive(arr, pi + 1, high, size);
    }
}

/**
 * quick_sort - Prepare the terrain for quicksort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (!array || size < 2)
        return;
    quick_sort_recursive(array, 0, size - 1, size);
}

