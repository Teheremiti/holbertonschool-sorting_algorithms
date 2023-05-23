#include "sort.h"

/**
 * lomutoPartition - Lomuto partition scheme
 *
 * @arr: Array to be sorted
 * @low: Index of the first element of the current partition
 * @high: Index of the last element of the current partition
 * @size: Size of the array
 *
 * Return: The partitioning index
 */

int lomutoPartition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high], tmp;
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;

			if (i != j)
				print_array(arr, size);
		}
	}

	tmp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = tmp;

	if (i + 1 != j)
		print_array(arr, size);

	return (i + 1);
}


/**
 * quicksort - Sort an array of integer using the Quick sort algorithm
 *
 * @array: Array to be sorted
 * @low: Index of the first element of the current partition
 * @high: Index of the last element of the current partition
 * @size: Size of the array
 */

void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int partitionIndex = lomutoPartition(array, low, high, size);

		quicksort(array, low, partitionIndex - 1, size);
		quicksort(array, partitionIndex + 1, high, size);
	}
}


/**
 * quick_sort - Because the checker wants a specific prototype :sigh:
 *
 * @array: Array to be sorted
 * @size: Size of the array
 */

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
