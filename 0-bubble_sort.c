#include "sort.h"

/**
 * bubble_sort - Sort an array in ascending order using the Bubble sort
 * algorithm
 *
 * @array: Array to sort
 * @size: Size of the array
 *
 * Return: (void)
 */

void bubble_sort(int *array, size_t size)
{
	int sorted = 0;

	if (!array)
		return;

	while (!sorted)
	{
		size_t i;

		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp;

				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				sorted = 0;

				print_array(array, size);
			}
		}
	}
}
