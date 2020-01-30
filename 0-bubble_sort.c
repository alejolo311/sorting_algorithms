#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int sort = 0, aux;
    unsigned int i = 0;

    if (array == NULL || size < 2)
        return;

    while(sort != 0)
    {
        sort = 1;
        for (i = 0; i < size - 1; i++)
        {
            if (*(array + i) > *(array + (i + 1)))
            {
                aux = *(array + i);
                *(array + i) = *(array + (i + 1));
                *(array + (i + 1)) = aux;
                sort = 0;
                print_array(array, size);
            }
        }
    }
}