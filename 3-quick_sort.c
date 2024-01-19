#include "sort.h"
#include <stdio.h>

void swap_ints(int *a, int *b);
size_t lomuto_partition(int *array, size_t low, size_t high);
void quick_sort_recursive(int *array, size_t low, size_t high);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

size_t lomuto_partition(int *array, size_t low, size_t high)
{
	int pivot;
	size_t i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_ints(&array[i], &array[j]);
		}
	}

	swap_ints(&array[i + 1], &array[high]);
	
	return(i + 1);
}
