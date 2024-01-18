#include "sort.h"

/**
 * swap - Swaps the values of two integer pointers.
 * @xp: Pointer to the first integer.
 * @yp: Pointer to the second integer.
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
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
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j =0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);

				printf("Swap: %d <-> %d\n", array[j], array[j + 1]);
				for (size_t k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
	}
}
