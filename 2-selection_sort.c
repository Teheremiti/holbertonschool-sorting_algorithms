#include "sort.h"
/**
 * selection_sort - sorts an array in ascending order with selection sort
 * @array: array to be sorted
 * @size: max size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int runner = 0;
	int tmp = 0;

	if (!array || !size)
		return;
	while (i < size - 1)
	{
		while (j < size - 1)
		{
			runner = array[i];
			j++;
			if (array[j] < runner)
			{
				tmp = array[j];
				array[j] = runner;
				runner = tmp;
				array[i] = runner;
				print_array(array, size);
			}
		}
		i++;
		j = i;
	}
}
