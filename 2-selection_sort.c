#include "sort.h"

/**
 *selection_sort - function that sorts an array of integers in
 *ascending order using the Selection sort algorithm
 *@array: the array to be sorted
 *@size: the size of the array
 *Return: None
 */
void selection_sort(int *array, size_t size)
{
	unsigned int tmp;
	unsigned int i;
	unsigned int minIndex;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i <= size - 1; i++)
	{
		minIndex = selection(array, i, size);
		if (i != minIndex)
		{
			tmp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = tmp;
			print_array(array, size);
		}
	}

}

/**
 *selection - select the index of supposed minor number of the list
 *@array: the array to look for
 *@start: index to start to look
 *@size: the size of the array
 *Return: None
 */
unsigned int selection(int *array, unsigned int start, size_t size)
{
	unsigned int minIndex;
	unsigned int j;

	minIndex = start;
	for (j = start + 1; j <= size - 1; j++)
	{
		if (array[minIndex] > array[j])
		{
			minIndex = j;
		}
	}
	return (minIndex);

}
