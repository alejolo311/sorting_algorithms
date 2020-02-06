#include "sort.h"
/**
 * quick_sort - Quick sort algorithm
 * Description: Quick sort algorithm
 * @array: Array
 * @size: Size of the array
 * Return:
 */
void quick_sort(int *array, size_t size)
{
	q_sort(array, 0, size - 1, size);
}

/**
 * q_sort - Implementation of quick sort
 * @array: Array
 * @lo: Lower index
 * @hi: Higher index
 * @size: Size of @array
 * Return:
 */
void q_sort(int *array, int lo, int hi, size_t size)
{
	int part;

	if (lo < hi)
	{
		part = partition(array, lo, hi, size);
		q_sort(array, lo, part - 1, size);
		q_sort(array, part + 1, hi, size);
	}
}

/**
 * partition - Partition function
 * @array: Array
 * @lo: Lower index
 * @hi: Higher index
 * @size: Size of @array
 * Return: Index when we gonna make the partition
 */
size_t partition(int *array, int lo, int hi, size_t size)
{
	int aux, pivot = array[hi];
	int i = lo - 1, j;

	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != hi)
	{
		aux = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = aux;
		print_array(array, size);
	}
	return (i + 1);
}
