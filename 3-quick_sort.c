#include "sort.h"


/**
 * quick_sort - function that sorts an array of integers in
 *  ascending order using the Quick sort algorithm.
 * @array: the element to sort
 * @size: the number of elements to sort
 */
void quick_sort(int *array, size_t size)
{
	int p = 0;

	if (array == NULL || size < 2)
		return;
	arrange(array, p, size - 1, size);
}

/**
 *partition - function to create the subarrays
 *@array: the array to sort
 *@p: index to the start of the first subarray
 *@r: end index of the second sub array
 *@size: the size of the array
 *Return: None
 */
int partition(int *array, int p, int r, size_t size)
{

	int tmp, x, i, j;
	(void)size;

	x = array[r];
	i = p - 1;
	for (j = p; j <= r - 1; j++)
	{
		if (array[j] <= x)
		{
			i = i + 1;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[r])
	{
	 	tmp = array[i + 1];
		array[i + 1] = array[r];
		array[r] = tmp;
		print_array(array, size);
	}
	return (i + 1);

}
/**
 *arrange - recursion function to sort the subarrays
 *@array: the array to sort
 *@p: index to the start of the first subarray
 *@r: end index of the second sub array
 *@size: the size of the array
 *Return: None
 */
void arrange(int *array, int p, int r, size_t size)
{
	int q = 0;

	if (p < r)
	{
		q = partition(array, p, r, size);
		arrange(array, p, q - 1, size);
		arrange(array, q + 1, r, size);

	}
}
