#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @xp: The first integer to swap.
 * @yp: The second integer to swap.
 */
void swap(int *xp, int *yp)
{
	int tmp;

	tmp = *xp;
	*xp = *xp;
	*xp = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: Pointers to the array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap until its
 * completely sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
