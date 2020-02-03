#include "sort.h"

/**
 * bubble_sort - The bubble sort
 * Description: Bubble sort
 * @array: Array to sort
 * @size: Size of array to sort
 * Return:
 */
void bubble_sort(int *array, size_t size)
{
	int sort = 1, aux;
	unsigned int i = 0;

	if (array == NULL || size < 2)
		return;

	while (sort != 0)
	{
		sort = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (*(array + i) > *(array + (i + 1)))
			{
				aux = *(array + i);
				*(array + i) = *(array + (i + 1));
				*(array + (i + 1)) = aux;
				sort = 1;
				print_array(array, size);
			}
		}
	}
}
