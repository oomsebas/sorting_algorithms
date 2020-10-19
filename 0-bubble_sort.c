#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: This is the data structure to be sorted
 * @size: The number of elements to be sorted (len of array)
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, flag = 0, swap = 1;
	unsigned int i = 0, n;

	if (array == NULL || size <= 0)
		return;

	n = size;
	while (swap)
	{
		swap = 0;
		for (i = 1; i <= (n - 1) ; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;
				flag = i;
				swap += 1;
				print_array(array, size);
			}

		}
		n = flag;
	}
}
