#include "sort.h"

/**
 * partition - places elements in correct position of a sorted array
 * @array: array
 * @head: beggining index
 * @tail: last index
 * @size: array size
 * Return: x
 */
int partition(int *array, int head, int tail, size_t size)
{
	int pivot = array[tail], x = head - 1, y = head, tmp = 0;

	while (y <= tail - 1)
	{
		if (array[y] <= pivot)
		{
			x++;
			tmp = array[x];
			array[x] = array[y];
			array[y] = tmp;

			if (x != y)
			{
				print_array(array, size);
			}
		}
		y++;
	}
	tmp = 0;
	x++;
	tmp = array[x];
	array[x] = array[tail];
	array[tail] = tmp;

	if (array[x] != array[tail])
	{
		print_array(array, size);
	}
	return (x);
}
/**
 * sort_assist - helps to sort
 * @array: array
 * @head: first index
 * @tail: last index
 * @size: array size
 */
void sort_assist(int *array, int head, int tail, size_t size)
{
	int x = 0;

	if (head < tail)
	{
		x = partition(array, head, tail, size);

		sort_assist(array, head, x - 1, size);
		sort_assist(array, x + 1, tail, size);
	}
}

/**
 * quick_sort - entry to sort
 * @array: array
 * @size: array size
 */

void quick_sort(int *array, size_t size)
{
	sort_assist(array, 0, size - 1, size);
}
