#include "sort.h"

int max_num(int *array, size_t size);

/**
 * counting_sort - counting
 * desc: using the counting sort algorithm
 * @array: iarray
 * @size: size
 */
void counting_sort(int *array, size_t size)
{
	int max = max_num(array, size);
	int range = max + 1;
	int *count = malloc(sizeof(int) * range);
	int *output = malloc(sizeof(int) * size);
	int i;

	for (i = 0; i < range; i++)
		count[i] = 0;
	for (i = 0; i < (int) size; i++)
		++count[array[i]];
	for (i = 1; i < range; i++)
		count[i] += count[i - 1];
	print_array(count, range);
	for (i = 0; array[i]; i++)
	{
		output[count[array[i]] - 1] = array[i];
		--count[array[i]];
	}
	for (i = 0; output[i]; i++)
		array[i] = output[i];
}

/**
 * max_num - get the maximun number
 * @array: iarray
 * @size: size
 * Return: Maximun number of @array
 */
int max_num(int *array, size_t size)
{
	size_t i;
	int max;

	if (size == 0)
		exit(0);

	max = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
