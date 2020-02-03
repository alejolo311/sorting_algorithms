#include "sort.h"

size_t find_least(int *array, size_t size, int n, size_t actual_i);

/**
 * quick_sort - Quick sort algorithm
 * Description: Quick sort algorithm
 * @array: Array
 * @size: Size of the array
 * Return:
 */
void quick_sort(int *array, size_t size)
{
	unsigned int i, least_index;
	int aux;

	for (i = 0; i < size; i++)
	{
		least_index = find_least(array, size, array[i], i);

		if (array[least_index] < array[i])
		{
			aux = array[i];
			array[i] = array[least_index];
			array[least_index] = aux;
			print_array(array, size);
		}
	}
}

/**
 * find_least -  Finds the index of the least number
 * Description: Function that finds the index of the least number
 * @array: Array
 * @size: Size of the array
 * @n: The number of the superior loop
 * @actual_i: The actual index on superior loop
 * Return: The index of the least number
 */
size_t find_least(int *array, size_t size, int n, size_t actual_i)
{
	unsigned int least_index = actual_i, i;

	for (i = actual_i + 1; i < size; i++)
	{
		if (array[i] < n)
		{
			n = array[i];
			least_index = i;
		}
	}
	return (least_index);
}
