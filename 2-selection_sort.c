#include "sort.h"

/**
 * selection_sort - this is a sorting algorithms
 * @array: this is an integer parameter
 * @size: this is another size
 * return: nothing
 */

void selection_sort(int *array, size_t size)
{
	int current = 0, s = 1;
	size_t i = 0, j = 1, pos;
	int min, t = 0;

	if (array == NULL && size < 2)
		return;

	while (s != 0)
	{
		s = 0;
		for (i = 0; i < size; i++)
		{
			current = array[i];
			j = 1;
			while (j + i < size)
			{
				if (current > array[j] && t == 0)
				{
					min = array[j];
					t = 1;
				}
				else if (min && min > array[j])
				{
					min = array[j];
					pos = j;
				}
				j++;
			}
			if (min)
			{
				array[i] = min;
				array[pos] = current;
				s += 1;
				print_array(array, size);
			}

		}
	}
}
