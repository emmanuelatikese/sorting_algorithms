#include "sort.h"
/**
 * bubble_sort - this is a sorting algorithm
 *
 * @array: this is an int parameter
 * @size: this is a size parameter
 *
 * Return: It returns nothing or void
 */

void bubble_sort(int *array, size_t size)
{

	int tmp;
	size_t s_num = 1;
	size_t a = 0;

	if (array == NULL || size < 2)
		return;

	while (s_num != 0)
	{
		s_num = 0;

		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				tmp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = tmp;
				s_num++;
				print_array(array, size);
			}
		}
	}
}
