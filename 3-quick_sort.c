#include "sort.h"
#include <time.h>

/**
 * fswap - this function does a lot of swapping
 * @a: this is another parameter
 * @b: this is also paramte
 * @array: another array
 * return: void
 */

void fswap(int a, int b, int *array)
{
	int t = array[a];

	array[a] = array[b];
	array[b] = t;
}

/**
 * fpat - this is a funciton for partition
 * @array: this is the list of array
 * @lo: this is the lowest index
 * @hi: this is the higher index
 * @size: another one
 * Return: it returns
 */

int fpat(int *array, int lo, int hi, size_t size)
{
	int pval = array[hi], x = lo - 1;
	int j = lo;

	for (; j < hi; j++)
	{
		if (array[j] < pval)
		{
			x++;
			if (array[x] != array[j])
			{
				fswap(x, j, array);
				print_array(array, size);
			}
		}
	}
	fswap(x + 1, hi, array);
	print_array(array, size);
	return (x + 1);
}

/**
 * frecursive - this is a recursive function
 * @array: this is the list of element
 * @lo: this is the low number
 * @hi: this is high number
 * @size: another integer
 * return: returns void
 */

void frecursive(int *array, int lo, int hi, size_t size)
{
	if (lo < hi)
	{
		int pidx = fpat(array, lo, hi, size);

		frecursive(array, lo, pidx - 1, size);
		frecursive(array, pidx + 1, hi, size);
	}
}

/**
 * quick_sort - this function does all the sorting
 * @array: this is the list of integers
 * @size: this is another length
 * return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	frecursive(array, 0, size - 1, size);
}
