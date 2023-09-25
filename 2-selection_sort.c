#include "sort.h"

/**
 * selection_sort - sorts an array in integers in ascending order
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int swaps;
	size_t x, y, min;

	if (!array || size<= 1)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
			{
				min = y;
			}
		}
		if (min != x)
		{
			swaps = array[x];
			array[x] = array[min];
			array[min] = swaps;
			print_array(array, size);
		}
	}
}
