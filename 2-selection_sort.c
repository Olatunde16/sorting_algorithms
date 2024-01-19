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
