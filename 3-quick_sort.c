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

/**
 * lomuto_partition - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @low: The starting index of the subset to order.
 * @high: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
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

/**
 * quick_sort_recursive - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */

void quick_sort_recursive(int *array, size_t low, size_t high)
{
	if (low < high) 
	{
		int pivot;
		size_t i, j;
		
		pivot = array[high];
		i = low - 1;
		
		for (size_t j = low; j <= high - 1; j++)
		{
			if (array[j] < pivot) 
			{
				i++;
				swap_ints(&array[i], &array[j]);
			}
		}
		
		swap_ints(&array[i + 1], &array[high]);
		
		/* Prints the array after each partition */
		printf("Partition: ");
		for (size_t k = low; k <= high; k++) 
			printf("%d ", array[k]);
		
		printf("\n");
		
		quick_sort_recursive(array, low, i);
		quick_sort_recursive(array, i + 2, high);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size) 
{
	if (array == NULL || size < 2) 
		return; /* No sorting needed for small or empty arrays */
	
	quick_sort_recursive(array, 0, size - 1);
}
