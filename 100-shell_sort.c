#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */

void shell_sort(int *array, size_t size)
{
	int interval, n;
	size_t i, outer, inner;

	interval = 1;

	while (interval <= size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		printf("%d ", interval);

		for (i = 0; i < size; ++i)
			printf("%d ", array[i]);

		printf("\n");

		for (outer = interval; outer < size, ++outer)
		{
			n = array[outer];
			inner = outer;

			while (inner >= interval && array[inner - interval] > n)
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}

			array[inner] = n;
		}

		interval = (interval - 1) / 3;
	}
}
