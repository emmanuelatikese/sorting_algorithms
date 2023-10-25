#include "sort.h"

/**
 * selection_sort - this is a sorting algorithms
 * @array: this is an integer parameter
 * @size: this is another size
 * return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int current;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		current = array[i];
		idx = i;

		for (j = i + 1; j < size; j++)
		{
			if(array[idx] > array[j])
			{
				idx = j;
			}
		}

		if (idx != i)
		{
			array[i] = array[idx];
			array[idx] = current;
			print_array(array, size);
		}
	}
}
