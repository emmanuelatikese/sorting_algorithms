#include "sort.h"
/**
 * shell_sort - this does shell sorting
 *
 * @array: this is the list of array
 * @size: this a size_t number parameter
 *
 * return: void or nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t g, j, i;

	if (array == NULL || size < 2)
		return;

	for (g = size / 2; g > 0; g /= 2)
	{
		if (g != size / 2)
		{
			print_array(array, size);
		}

		for (j = g; j < size; j++)
		{
			int tmp = array[j];

			i = 0;
			for (i = j; i >= g && array[i - g] > tmp; i -= g)
			{
				array[i] = array[i - g];
			}
			array[i] = tmp;
		}
	}
}
