#include <stdio.h>
#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @xp: The first integer to swap.
 * @yp: The second integer to swap.
 */
void swap_ints(int *xp, int *yp)
{
	int temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min_index;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = array + i;
		for (j = i + 1; j < size; j++)
			min_index = (array[j] < *min_index) ? (array + j) : min_index;

		if ((array + i) != min_index)
		{
			swap_ints(array + i, min_index);
			print_array(array, size);
		}
	}
}
