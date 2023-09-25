#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int tmp;

	if (array != 0)
	{
		for (x = 0; x < size - 1; x++)
		{
			for (y = 0; y < size - x - 1; y++)
			{
				if (array[y] > array[y + 1])
				{
					tmp = array[y];
					array[y] = array[y + 1];
					array[y + 1] = tmp;
					print_array(array, size);
				}
			}
		}
	}
}