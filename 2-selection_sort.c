#include "sort.h"

/**
 * selection_sort - Sorts an array in ascending order with selection sort
 *
 * @array: Array to be sorted
 * @size: Size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		size_t k = i;
		int swap = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
			{
				k = j;
				swap = 1;
			}
		}

		tmp = array[i];
		array[i] = array[k];
		array[k] = tmp;

		if (swap)
			print_array(array, size);
	}
}
