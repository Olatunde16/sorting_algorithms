#include "sort.h"

/**
 * swap - Swaps the values of two integer pointers.
 * @xp: Pointer to the first integer.
 * @yp: Pointer to the second integer.
 */

void swap(int *xp, int *yp)
{
	int temp; 
	
	temp = *xp;
	*xp = *yp;
	*yp = temp;
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
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
